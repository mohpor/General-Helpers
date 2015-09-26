#
# Be sure to run `pod lib lint general-helpers.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "general-helpers"
  s.version          = "0.1.0"
  s.summary          = "A repository to add All helper methods I have developed over the years."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
  s.description      = <<-DESC
                       Although Cocoa Touch and xcode include many tools to help start and develop projects, but every developer has his/her own methodology and after a period of time developing, will come up with a few set of tools he/she end up using in all projects. this repository refelcts the tools I'm using in almost all projects.
					   DESC

  s.homepage         = "https://github.com/mohpor/General-Helpers"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "M. Porooshani" => "porooshani@gmail.com" }
  s.source           = { :git => "https://github.com/mohpor/General-Helpers.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/mohpor'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*'
  s.resource_bundles = {
    'general-helpers' => ['Pod/Assets/*.png']
  }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
