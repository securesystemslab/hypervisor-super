# hypervisor-super
A super project to simplifiy building the Bareflank Hypervisor using the Secure Systems Lab Multicompiler. I found it tedious and time consuming to debug the configuration steps involved in setting up Bareflank to use the Multicompiler as both a native compiler, and as a cross compiler. This super project contains a simple set of build scripts to build the project in its entirety.

Originally this began as a set of submodules, but due to the in-development nature of both te hypervisor and Multicompiler, this became unwieldy. Until git provides a sane way to manage projects composed of many pieces, we're going to simply clone our subprojects directly. 

### Checkout the Multicompiler super project
`git clone -b no-submodules git@github.com:/ilovepi/multicompiler-automation.git multicompiler`

#### Clone LLVM, Clang, compiler-rt, poolalloc, and SVF into the Multicompiler project:

`git clone -b cfar_38 git@github.com:/securesystemslab/multicompiler-priv.git multicompiler/llvm`

`git clone -b cfar_38 git@github.com:/securesystemslab/multicompiler-clang-priv.git multicompiler/llvm/tools/clang`

`git clone -b cfar_38 git@github.com:/securesystemslab/multicompiler-compiler-rt-priv.git multicompiler/llvm/projects/compiler-rt`

`git clone -b cfar_38 git@github.com:/securesystemslab/poolalloc multicopilerllvm/projects/poolalloc`

`git clone git@github.com:/rboggild/SVF multicompiler/llvm/projects/svf`

### Checkout our fork of the Bareflank Hypervisor
`git clone git@github.com:/ilovepi/hypervisor.git hypervisor`

### Using Ansible

If you build on Ubuntu, you may use Ansible to automate installing and building the multicompiler there is a project that will build and install this project and all of its dependencies, including OS packages. If building on a remote system you will need to provide the correct credentials through Ansible, and may need to edit the inventory file to reflect not installing on the local host. This role was developed for use in a jenkins job, as the branch name indicates. In the future these roles may be availible on Ansible-Galaxy.

The project can installed by:

```
git clone -b jenkins https://github.com/ilovepi/vagrant-ansible-provisioning.git provision
cd provision
ansible-galaxy install -r requirements.yml
ansible-playbook -i inventory playbook.yml
```
This will install the project to a folder named project, but that cna be changed by providing the varialbe `project_root` the desired location to install in either the commandline invocation, in `playbook.yml`, or in a `vars` file.

See http://docs.ansible.com/ansible/playbooks_roles.html for more detailed information.






