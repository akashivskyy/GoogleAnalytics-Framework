# GoogleAnalytics-Framework

[![](https://img.shields.io/github/tag/akashivskyy/GoogleAnalytics-Framework.svg?label=version)](https://github.com/akashivskyy/GoogleAnalytics-Framework/tags)
[![](https://img.shields.io/badge/carthage-compatible-brightgreen.svg)](https://github.com/Carthage/Carthage)
[![](https://img.shields.io/badge/cocoapods-incompatible-red.svg)](https://cocoapods.org)

**GoogleAnalytics-Framework** is a dynamic framework wrapper for [Google Analytics iOS SDK](https://developers.google.com/analytics/devguides/collection/ios/v3/).

## Warning 

**This project is no longer maintained and may be completely removed from GitHub in the future. Please use the official distribution of Google Analytics iOS SDK instead.**

## Usage

The project defines a `GoogleAnalytics.framework` target, therefore you may import it like any other library or module:

```objc
// Objective-C

@import GoogleAnalytics;
#import <GoogleAnalytics/GoogleAnalytics.h>
```

```swift
// Swift

import GoogleAnalytics
```

## Installation

### Carthage

If you're using [Carthage](https://github.com/Carthage/Carthage), just add the following dependency to your `Cartfile`:

```none
github "akashivskyy/GoogleAnalytics-Framework"
```

### CocoaPods

While CocoaPods is not supported by this fork, you may still use the official `GoogleAnalytics` pod as CocoaPods creates framework targets automatically:

```none
use_frameworks!
pod "GoogleAnalytics"
```

## About

### Maintainers

**Adrian Kashivskyy**

- [http://github.com/akashivskyy](http://github.com/akashivskyy)
- [http://twitter.com/akashivskyy](http://twitter.com/akashivskyy)

### License

The project is licensed under [Google Analytics Terms of Service](http://www.google.com/analytics/terms/us.html), [Google Analytics SDK Policy](https://developers.google.com/analytics/devguides/collection/protocol/policy) and the MIT License. See [LICENSE.md](LICENSE.md) for more info.
