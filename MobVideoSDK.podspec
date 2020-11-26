#
# Be sure to run `pod lib lint MobVideoSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MobVideoSDK'
  s.version          = '2.2.1'
  s.summary          = 'MobVideoSDK.'
  s.description      = <<-DESC
  Video SDK.
                       DESC

  s.author           = { 'ad' => 'ad@ad.com' }
  s.homepage         = 'https://gitee.com/mobad/MobVideoSDK'
  s.source           = { :git => 'https://gitee.com/mobad/MobVideoSDK.git', :tag => s.version.to_s }
  s.platform         = :ios, "9.0"

  s.vendored_frameworks = 'MobVideoSDK/Frameworks/MobVideoSDK.framework'
  valid_archs = ['armv7', 'arm64', 'i386', 'x86_64']
end
