#!/usr/bin/env groovy

pipeline {
    stage('Shuffle Stack Frames') {
        echo 'Building hypervisor with the shuffle stack frames diversification option...'
        sh 'cd scripts'
        sh 'shuffle_stack_frames_build.sh'
    }
    stage('Unittest') {
        sh 'make test'
    }
}
