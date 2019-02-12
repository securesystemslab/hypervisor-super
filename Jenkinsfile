#!/usr/bin/env groovy

pipeline {
    agent any
    stages{
        stage('Setup') {
            steps{
                echo 'Cloning Multicompiler and Bareflank hypervisor...'
                sh 'cd scripts'
                sh './setup'
            }
        }
    }

}
