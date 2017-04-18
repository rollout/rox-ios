Pod::Spec.new do |s|

  s.name         = "ROX"
  s.version      = "0.0.1"
  s.summary      = "The Fastest Way to Safely Deploy Mobile Features"
  s.description  = "The Fastest Way to Safely Deploy Mobile Features"

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

  s.ios.vendored_frameworks = 'ROX/ROX.framework'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }

  s.source       = { :git => "https://github.com/rollout/rox-ios.git", :tag => "0.0.1" }
  s.preserve_paths = "lib/**/*", "install/**/*", "RolloutFeatureFlags/*"

end
