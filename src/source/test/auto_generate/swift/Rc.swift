// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

import DjinniSwift
import Foundation

@objc public class Rc : NSObject {

    public let a : Int32

    public init(a: Int32) {
        self.a = a
    }
}
extension Rc  {
    @available(swift, obsoleted: 1.0)
    @objc public var __djinni__objc_a: Int32 {
        get {
            return a
        }
    }
    @available(swift, obsoleted: 1.0)
    @objc public static func `init`(a: Int32) -> Rc {
        return Rc.init(a: a)}
}
