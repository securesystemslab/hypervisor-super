FROM ubuntu:18.04 as clone_stage

WORKDIR /bfbuild

# Allow SSH key to be passed in
ARG SSH_KEY

RUN apt-get update
RUN apt-get install -y openssh-client

# 1. Create the SSH directory.
# 2. Populate the private key file.
# 3. Set the required permissions.
# 4. Add github to our list of known hosts for ssh.
RUN mkdir -p /root/.ssh/ && \
    echo "$SSH_KEY" > /root/.ssh/id_rsa && \
    chmod -R 600 /root/.ssh/ && \
    ssh-keyscan -t rsa github.com >> ~/.ssh/known_hosts

#Clone hypervisor-super repository and run setup script
RUN apt-get install -y git

RUN git clone git@github.com:securesystemslab/hypervisor-super.git --depth 1

# sudo package is required for installing other dependencies
RUN apt-get install sudo

WORKDIR /bfbuild/hypervisor-super
RUN bash setup.sh

# Remove SSH keys from container
RUN rm -rf /root/.ssh

# New stage 

FROM ubuntu:18.04

RUN apt-get update
RUN apt-get install -y sudo

# Copy repository from clone stage
COPY --from=clone_stage /bfbuild/hypervisor-super /srv/bfbuild/hypervisor-super/

WORKDIR /srv/bfbuild/hypervisor-super/multicompiler
RUN bash build.sh
