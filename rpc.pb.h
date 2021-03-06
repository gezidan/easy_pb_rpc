// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#ifndef PROTOBUF_rpc_2eproto__INCLUDED
#define PROTOBUF_rpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace RPC {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpc_2eproto();
void protobuf_AssignDesc_rpc_2eproto();
void protobuf_ShutdownFile_rpc_2eproto();

class RpcRequestData;
class RpcResponseData;

// ===================================================================

class RpcRequestData : public ::google::protobuf::Message {
 public:
  RpcRequestData();
  virtual ~RpcRequestData();
  
  RpcRequestData(const RpcRequestData& from);
  
  inline RpcRequestData& operator=(const RpcRequestData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcRequestData& default_instance();
  
  void Swap(RpcRequestData* other);
  
  // implements Message ----------------------------------------------
  
  RpcRequestData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcRequestData& from);
  void MergeFrom(const RpcRequestData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 service_id = 1;
  inline bool has_service_id() const;
  inline void clear_service_id();
  static const int kServiceIdFieldNumber = 1;
  inline ::google::protobuf::uint32 service_id() const;
  inline void set_service_id(::google::protobuf::uint32 value);
  
  // required uint32 method_id = 2;
  inline bool has_method_id() const;
  inline void clear_method_id();
  static const int kMethodIdFieldNumber = 2;
  inline ::google::protobuf::uint32 method_id() const;
  inline void set_method_id(::google::protobuf::uint32 value);
  
  // required uint32 call_id = 3;
  inline bool has_call_id() const;
  inline void clear_call_id();
  static const int kCallIdFieldNumber = 3;
  inline ::google::protobuf::uint32 call_id() const;
  inline void set_call_id(::google::protobuf::uint32 value);
  
  // required bytes content = 4;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 4;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  
  // @@protoc_insertion_point(class_scope:RPC.RpcRequestData)
 private:
  inline void set_has_service_id();
  inline void clear_has_service_id();
  inline void set_has_method_id();
  inline void clear_has_method_id();
  inline void set_has_call_id();
  inline void clear_has_call_id();
  inline void set_has_content();
  inline void clear_has_content();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 service_id_;
  ::google::protobuf::uint32 method_id_;
  ::std::string* content_;
  ::google::protobuf::uint32 call_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();
  
  void InitAsDefaultInstance();
  static RpcRequestData* default_instance_;
};
// -------------------------------------------------------------------

class RpcResponseData : public ::google::protobuf::Message {
 public:
  RpcResponseData();
  virtual ~RpcResponseData();
  
  RpcResponseData(const RpcResponseData& from);
  
  inline RpcResponseData& operator=(const RpcResponseData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcResponseData& default_instance();
  
  void Swap(RpcResponseData* other);
  
  // implements Message ----------------------------------------------
  
  RpcResponseData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcResponseData& from);
  void MergeFrom(const RpcResponseData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 call_id = 1;
  inline bool has_call_id() const;
  inline void clear_call_id();
  static const int kCallIdFieldNumber = 1;
  inline ::google::protobuf::uint32 call_id() const;
  inline void set_call_id(::google::protobuf::uint32 value);
  
  // required bytes content = 2;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 2;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const void* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  
  // @@protoc_insertion_point(class_scope:RPC.RpcResponseData)
 private:
  inline void set_has_call_id();
  inline void clear_has_call_id();
  inline void set_has_content();
  inline void clear_has_content();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* content_;
  ::google::protobuf::uint32 call_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_rpc_2eproto();
  friend void protobuf_AssignDesc_rpc_2eproto();
  friend void protobuf_ShutdownFile_rpc_2eproto();
  
  void InitAsDefaultInstance();
  static RpcResponseData* default_instance_;
};
// ===================================================================


// ===================================================================

// RpcRequestData

// required uint32 service_id = 1;
inline bool RpcRequestData::has_service_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcRequestData::set_has_service_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcRequestData::clear_has_service_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcRequestData::clear_service_id() {
  service_id_ = 0u;
  clear_has_service_id();
}
inline ::google::protobuf::uint32 RpcRequestData::service_id() const {
  return service_id_;
}
inline void RpcRequestData::set_service_id(::google::protobuf::uint32 value) {
  set_has_service_id();
  service_id_ = value;
}

// required uint32 method_id = 2;
inline bool RpcRequestData::has_method_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcRequestData::set_has_method_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcRequestData::clear_has_method_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcRequestData::clear_method_id() {
  method_id_ = 0u;
  clear_has_method_id();
}
inline ::google::protobuf::uint32 RpcRequestData::method_id() const {
  return method_id_;
}
inline void RpcRequestData::set_method_id(::google::protobuf::uint32 value) {
  set_has_method_id();
  method_id_ = value;
}

// required uint32 call_id = 3;
inline bool RpcRequestData::has_call_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcRequestData::set_has_call_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcRequestData::clear_has_call_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcRequestData::clear_call_id() {
  call_id_ = 0u;
  clear_has_call_id();
}
inline ::google::protobuf::uint32 RpcRequestData::call_id() const {
  return call_id_;
}
inline void RpcRequestData::set_call_id(::google::protobuf::uint32 value) {
  set_has_call_id();
  call_id_ = value;
}

// required bytes content = 4;
inline bool RpcRequestData::has_content() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcRequestData::set_has_content() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcRequestData::clear_has_content() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcRequestData::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& RpcRequestData::content() const {
  return *content_;
}
inline void RpcRequestData::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void RpcRequestData::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void RpcRequestData::set_content(const void* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcRequestData::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* RpcRequestData::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// -------------------------------------------------------------------

// RpcResponseData

// required uint32 call_id = 1;
inline bool RpcResponseData::has_call_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcResponseData::set_has_call_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcResponseData::clear_has_call_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcResponseData::clear_call_id() {
  call_id_ = 0u;
  clear_has_call_id();
}
inline ::google::protobuf::uint32 RpcResponseData::call_id() const {
  return call_id_;
}
inline void RpcResponseData::set_call_id(::google::protobuf::uint32 value) {
  set_has_call_id();
  call_id_ = value;
}

// required bytes content = 2;
inline bool RpcResponseData::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcResponseData::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcResponseData::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcResponseData::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& RpcResponseData::content() const {
  return *content_;
}
inline void RpcResponseData::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void RpcResponseData::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void RpcResponseData::set_content(const void* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RpcResponseData::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* RpcResponseData::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace RPC

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_2eproto__INCLUDED
