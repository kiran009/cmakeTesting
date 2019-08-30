node(){
stage('Preparation'){
git(url: 'https://github.com/kiran009/cmakeTesting.git', credentialsId: 'kiran-githubcreds', branch: "master")
}
stage('Build')
{
cmakeBuild buildDir: 'build', installation: 'InSearchPath', steps: [[withCmake: true]]
}
}
