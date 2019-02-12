#!/usr/bin/env groovy

pipeline {
    agent {}
    stages{
        stage('Setup') {
            echo 'Cloning Multicompiler and Bareflank hypervisor...'
            sh 'cd scripts'
            sh './setup'
        }
        stage('Shuffle Stack Frames') {
            echo 'Building hypervisor with the shuffle stack frames diversification option...'
            sh 'cd scripts'
            sh 'shuffle_stack_frames_build.sh'
        }
        stage('Unittest') {
            sh 'make test'
        }
    }

}
