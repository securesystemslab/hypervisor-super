#!/usr/bin/env groovy

node {

    stage('Preparation') { // for display purposes
        // Get some code from a GitHub repository
        git credentialsId: 'b318613d-3a1e-4817-bf7d-653eba1cb429', url: 'git@github.com:securesystemslab/hypervisor.git'

    }
    stage('Build-Cross-Compiler') {
        // build the cross compiler
        sh 'make cross_compiler'

    }
    stage('Build Hypervisor') {
        def config = 
        sh 'make clean'

        sh 'CROSS_CXXFLAGS=${config} make'
    }
    stage('Unit Test') {
        sh 'make test'

    }
    /*
    stage('Test Kernel Module')
    {
        make driver_load
        make quick
        make stop
        make unload
        make driver_unload
    }
    stage('Diff Binaries')
    {
        // make sure binaries differ from standard executables
    }
    */
        @NonCPS
        def get_config(text){
            
            
        }
}
