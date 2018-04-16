Pod::Spec.new do |s|

# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

s.name         = "JOSE"
s.version      = "1.0.0"
s.summary      = "JOSE framework."

s.description  = "JOSE framework."

s.homepage     = "https://www.mastercard.com"
s.authors      = { "mastercard" => "https://www.mastercard.com" }

# ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

s.license      = "Copyright (c) 2018, MasterCard International Incorporated and/or its affiliates. All rights reserved."

# ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

s.source = { :git => "https://github.com/danielcano75/TestArtifactory/tree/master/JOSE", :tag => "1.0.0" }

# ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

s.vendored_framework = "JOSE.framework"
s.public_header_files = 'JOSE.framework/Headers/*.h'

end
