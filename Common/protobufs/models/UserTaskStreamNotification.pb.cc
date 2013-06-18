// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserTaskStreamNotification.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* UserTaskStreamNotification_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserTaskStreamNotification_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserTaskStreamNotification_2eproto() {
  protobuf_AddDesc_UserTaskStreamNotification_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserTaskStreamNotification.proto");
  GOOGLE_CHECK(file != NULL);
  UserTaskStreamNotification_descriptor_ = file->message_type(0);
  static const int UserTaskStreamNotification_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, interval_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, last_sent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, strict_),
  };
  UserTaskStreamNotification_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserTaskStreamNotification_descriptor_,
      UserTaskStreamNotification::default_instance_,
      UserTaskStreamNotification_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamNotification, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserTaskStreamNotification));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserTaskStreamNotification_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserTaskStreamNotification_descriptor_, &UserTaskStreamNotification::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserTaskStreamNotification_2eproto() {
  delete UserTaskStreamNotification::default_instance_;
  delete UserTaskStreamNotification_reflection_;
}

void protobuf_AddDesc_UserTaskStreamNotification_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n UserTaskStreamNotification.proto\"b\n\032Us"
    "erTaskStreamNotification\022\017\n\007user_id\030\001 \001("
    "\005\022\020\n\010interval\030\002 \001(\005\022\021\n\tlast_sent\030\003 \001(\t\022\016"
    "\n\006strict\030\004 \001(\010", 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserTaskStreamNotification.proto", &protobuf_RegisterTypes);
  UserTaskStreamNotification::default_instance_ = new UserTaskStreamNotification();
  UserTaskStreamNotification::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserTaskStreamNotification_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserTaskStreamNotification_2eproto {
  StaticDescriptorInitializer_UserTaskStreamNotification_2eproto() {
    protobuf_AddDesc_UserTaskStreamNotification_2eproto();
  }
} static_descriptor_initializer_UserTaskStreamNotification_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int UserTaskStreamNotification::kUserIdFieldNumber;
const int UserTaskStreamNotification::kIntervalFieldNumber;
const int UserTaskStreamNotification::kLastSentFieldNumber;
const int UserTaskStreamNotification::kStrictFieldNumber;
#endif  // !_MSC_VER

UserTaskStreamNotification::UserTaskStreamNotification()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserTaskStreamNotification::InitAsDefaultInstance() {
}

UserTaskStreamNotification::UserTaskStreamNotification(const UserTaskStreamNotification& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserTaskStreamNotification::SharedCtor() {
  _cached_size_ = 0;
  user_id_ = 0;
  interval_ = 0;
  last_sent_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  strict_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserTaskStreamNotification::~UserTaskStreamNotification() {
  SharedDtor();
}

void UserTaskStreamNotification::SharedDtor() {
  if (last_sent_ != &::google::protobuf::internal::kEmptyString) {
    delete last_sent_;
  }
  if (this != default_instance_) {
  }
}

void UserTaskStreamNotification::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserTaskStreamNotification::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserTaskStreamNotification_descriptor_;
}

const UserTaskStreamNotification& UserTaskStreamNotification::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserTaskStreamNotification_2eproto();  return *default_instance_;
}

UserTaskStreamNotification* UserTaskStreamNotification::default_instance_ = NULL;

UserTaskStreamNotification* UserTaskStreamNotification::New() const {
  return new UserTaskStreamNotification;
}

void UserTaskStreamNotification::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    user_id_ = 0;
    interval_ = 0;
    if (has_last_sent()) {
      if (last_sent_ != &::google::protobuf::internal::kEmptyString) {
        last_sent_->clear();
      }
    }
    strict_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserTaskStreamNotification::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 user_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_interval;
        break;
      }
      
      // optional int32 interval = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_interval:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &interval_)));
          set_has_interval();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_last_sent;
        break;
      }
      
      // optional string last_sent = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_last_sent:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_last_sent()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->last_sent().data(), this->last_sent().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_strict;
        break;
      }
      
      // optional bool strict = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_strict:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &strict_)));
          set_has_strict();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void UserTaskStreamNotification::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 user_id = 1;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->user_id(), output);
  }
  
  // optional int32 interval = 2;
  if (has_interval()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->interval(), output);
  }
  
  // optional string last_sent = 3;
  if (has_last_sent()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->last_sent().data(), this->last_sent().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->last_sent(), output);
  }
  
  // optional bool strict = 4;
  if (has_strict()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->strict(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserTaskStreamNotification::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 user_id = 1;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->user_id(), target);
  }
  
  // optional int32 interval = 2;
  if (has_interval()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->interval(), target);
  }
  
  // optional string last_sent = 3;
  if (has_last_sent()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->last_sent().data(), this->last_sent().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->last_sent(), target);
  }
  
  // optional bool strict = 4;
  if (has_strict()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->strict(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserTaskStreamNotification::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 user_id = 1;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
    }
    
    // optional int32 interval = 2;
    if (has_interval()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->interval());
    }
    
    // optional string last_sent = 3;
    if (has_last_sent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->last_sent());
    }
    
    // optional bool strict = 4;
    if (has_strict()) {
      total_size += 1 + 1;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserTaskStreamNotification::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserTaskStreamNotification* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserTaskStreamNotification*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserTaskStreamNotification::MergeFrom(const UserTaskStreamNotification& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_interval()) {
      set_interval(from.interval());
    }
    if (from.has_last_sent()) {
      set_last_sent(from.last_sent());
    }
    if (from.has_strict()) {
      set_strict(from.strict());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserTaskStreamNotification::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserTaskStreamNotification::CopyFrom(const UserTaskStreamNotification& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTaskStreamNotification::IsInitialized() const {
  
  return true;
}

void UserTaskStreamNotification::Swap(UserTaskStreamNotification* other) {
  if (other != this) {
    std::swap(user_id_, other->user_id_);
    std::swap(interval_, other->interval_);
    std::swap(last_sent_, other->last_sent_);
    std::swap(strict_, other->strict_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserTaskStreamNotification::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserTaskStreamNotification_descriptor_;
  metadata.reflection = UserTaskStreamNotification_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
