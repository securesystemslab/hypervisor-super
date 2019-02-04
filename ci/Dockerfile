FROM ubuntu:18.04

WORKDIR /bfbuild

# Allow SSH keys to be passed in
ARG ssh_priv
ARG ssh_pub

# Add SSH key for github repositories
RUN mkdir -p /root/.ssh
RUN chmod 700 /root/.ssh

ADD $ssh_priv /root/.ssh/id_rsa
ADD $ssh_pub /root/.ssh/id_rsa.pub

# Set correct permissions for SSH keys
RUN chmod 600 /root/.ssh/id_rsa
RUN chmod 600 /root/.ssh/id_rsa.pub

# Install dependencies for multicompiler and hypervisor at build stage
RUN apt-get update && apt-get install -y \
    autotools-dev \
    bison \
    build-essential \
    bzip2 \
    cmake \
    git \
    libssl1.0-dev \
    libtool \
    ninja-build \
    openssh-client \
    sudo \
    texinfo

# Add github public key to known hosts
RUN ssh-keyscan -t rsa github.com >> ~/.ssh/known_hosts

# Clone hypervisor-super repository and run setup script
RUN git clone -b ubuntu18_04 git@github.com:securesystemslab/hypervisor-super.git --depth 1
WORKDIR /bfbuild/hypervisor-super
RUN bash setup.sh

# Remove SSH keys from container
RUN rm -rf /root/.ssh
