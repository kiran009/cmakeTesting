node()
{
    stage('Preparation')
    {
        git(url: 'https://github.com/kiran009/cmakeTesting.git', credentialsId: 'githubcreds', branch: "master")
    }
    stage('Build')
    {
        //cmakeBuild buildDir: 'build', installation: 'InSearchPath', steps: [[withCmake: true]]
	sh(script:"cmake -H. -B./build;cmake --build ./build",returnStatus:true)
    }
    stage("Package")
    {
	sh(script:"cpack -G RPM --config ./build/CPackConfig.cmake".returnStatus:true)
    }
    /*stage("Publish")
    {
        sh "wget https://www.nano-editor.org/dist/v2.2/RPMS/nano-2.2.0-1.x86_64.rpm"
        sh "curl -v -u admin:admin --upload-file nano-2.2.0-1.x86_64.rpm http://localhost:8081/repository/yum-hosted/nano-2.2.0-1.x86_64.rpm"
    }*/
}
