// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserTaskStreamEmail.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* UserTaskStreamEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserTaskStreamEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserTaskStreamEmail_2eproto() {
  protobuf_AddDesc_UserTaskStreamEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserTaskStreamEmail.proto");
  GOOGLE_CHECK(file != NULL);
  UserTaskStreamEmail_descriptor_ = file->message_type(0);
  static const int UserTaskStreamEmail_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamEmail, user_id_),
  };
  UserTaskStreamEmail_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UserTaskStreamEmail_descriptor_,
      UserTaskStreamEmail::default_instance_,
      UserTaskStreamEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamEmail, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskStreamEmail, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UserTaskStreamEmail));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserTaskStreamEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UserTaskStreamEmail_descriptor_, &UserTaskStreamEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserTaskStreamEmail_2eproto() {
  delete UserTaskStreamEmail::default_instance_;
  delete UserTaskStreamEmail_reflection_;
}

void protobuf_AddDesc_UserTaskStreamEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031UserTaskStreamEmail.proto\032\022EmailMessag"
    "e.proto\"c\n\023UserTaskStreamEmail\022;\n\nemail_"
    "type\030\001 \002(\0162\022.EmailMessage.Type:\023UserTask"
    "StreamEmail\022\017\n\007user_id\030\002 \002(\005", 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserTaskStreamEmail.proto", &protobuf_RegisterTypes);
  UserTaskStreamEmail::default_instance_ = new UserTaskStreamEmail();
  UserTaskStreamEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserTaskStreamEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserTaskStreamEmail_2eproto {
  StaticDescriptorInitializer_UserTaskStreamEmail_2eproto() {
    protobuf_AddDesc_UserTaskStreamEmail_2eproto();
  }
} static_descriptor_initializer_UserTaskStreamEmail_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int UserTaskStreamEmail::kEmailTypeFieldNumber;
const int UserTaskStreamEmail::kUserIdFieldNumber;
#endif  // !_MSC_VER

UserTaskStreamEmail::UserTaskStreamEmail()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UserTaskStreamEmail::InitAsDefaultInstance() {
}

UserTaskStreamEmail::UserTaskStreamEmail(const UserTaskStreamEmail& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UserTaskStreamEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 12;
  user_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserTaskStreamEmail::~UserTaskStreamEmail() {
  SharedDtor();
}

void UserTaskStreamEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserTaskStreamEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserTaskStreamEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserTaskStreamEmail_descriptor_;
}

const UserTaskStreamEmail& UserTaskStreamEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserTaskStreamEmail_2eproto();  return *default_instance_;
}

UserTaskStreamEmail* UserTaskStreamEmail::default_instance_ = NULL;

UserTaskStreamEmail* UserTaskStreamEmail::New() const {
  return new UserTaskStreamEmail;
}

void UserTaskStreamEmail::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    email_type_ = 12;
    user_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UserTaskStreamEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::EmailMessage_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }
      
      // required int32 user_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
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

void UserTaskStreamEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UserTaskStreamEmail::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }
  
  // required int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UserTaskStreamEmail::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .EmailMessage.Type email_type = 1 [default = UserTaskStreamEmail];
    if (has_email_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
    }
    
    // required int32 user_id = 2;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->user_id());
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

void UserTaskStreamEmail::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UserTaskStreamEmail* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UserTaskStreamEmail*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UserTaskStreamEmail::MergeFrom(const UserTaskStreamEmail& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UserTaskStreamEmail::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserTaskStreamEmail::CopyFrom(const UserTaskStreamEmail& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTaskStreamEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void UserTaskStreamEmail::Swap(UserTaskStreamEmail* other) {
  if (other != this) {
    std::swap(email_type_, other->email_type_);
    std::swap(user_id_, other->user_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UserTaskStreamEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserTaskStreamEmail_descriptor_;
  metadata.reflection = UserTaskStreamEmail_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)