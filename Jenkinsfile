@Library('holoutils@master') _
pipeline{
  agent none
  options{
    buildDiscarder(logRotator(daysToKeepStr: '7', artifactDaysToKeepStr: '7'))
    timeout(time: 60, unit: 'MINUTES')
  }
  environment{
    SLACK_CHANNEL="#jenkins-shield"
    CONAN_USER_HOME="~/.conan/shield"
  }
  stages{
    stage('Build conan package'){
      when{
        branch 'master'
      }
      steps{
        build job: 'Tools - Conan Packages/master',
              parameters: [string(name: 'PACKAGE_NAME',
                              value: 'sw__shield'),
                            string(name: 'RECIPE_BRANCH',
                              value: 'master'),
                            string(name: 'PACKAGE_VERSION',
                              value: "${BUILD_NUMBER}"),
                            booleanParam(name: 'UPLOAD',
                              value: true)],
              quietPeriod: 5
      }
    }
  }
  post {
    always {
      script{
        currentBuild.result = "${currentBuild.result == 'UNSTABLE' ? 'FAILURE' : currentBuild.result}"
      }
    }
    success{
      script{
        slack.send_success()
      }
    }
    failure{
      script{
        slack.send_failure()
      }
    }
  }
}
