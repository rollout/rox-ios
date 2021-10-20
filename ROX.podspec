Pod::Spec.new do |s|

  s.name         = "ROX"
  s.version      = "5.0.10"
  s.summary      = "Continuous Feature Rollouts for Mobile"
  s.description  = "Release mobile features quickly and safely with fully controlled rollouts, measure impact, and react as needed without waiting for your next code release."

  s.homepage     = "https://rollout.io"
  s.license      = {
                      "type" => "Commercial",
                      "text" => "See http://www.rollout.io/"
                   }
  s.authors      = {
                      "Rollout.io" => "support@rollout.io"
                   }
  s.documentation_url = "http://support.rollout.io/"

  s.requires_arc = true

  s.source       = { :git => "https://github.com/rollout/rox-ios.git", :tag => "5.0.10" }

  s.source_files = '**/*.{h,swift}'

  s.dependency 'ROXCore', '5.0.10'

  s.swift_version = '4.0'
  
  s.ios.deployment_target  = '8.0'
  s.tvos.deployment_target  = '10.0'
end
