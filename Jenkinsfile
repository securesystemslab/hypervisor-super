#!/usr/bin/env groovy

pipeline {
    agent any
    stages{
        stage('Setup') {
            steps{
                echo 'Cloning Multicompiler and Bareflank hypervisor...'
                sh 'scripts/setup.sh'
            }
        }
    }

}
