// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserBadgeAwardedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserBadgeAwardedEmail.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Emails {

namespace {

const ::google::protobuf::Descriptor* UserBadgeAwardedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserBadgeAwardedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto() {
  protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserBadgeAwardedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  UserBadgeAwardedEmail_descriptor_ = file->message_type(0);
  static const int UserBadgeAwardedEmail_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, badge_id_),
  };
  UserBadgeAwardedEmail_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UserBadgeAwardedEmail_descriptor_,
      UserBadgeAwardedEmail::default_instance_,
      UserBadgeAwardedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, _has_bits_[0]),
      -1,
      -1,
      sizeof(UserBadgeAwardedEmail),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserBadgeAwardedEmail, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserBadgeAwardedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UserBadgeAwardedEmail_descriptor_, &UserBadgeAwardedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto() {
  delete UserBadgeAwardedEmail::default_instance_;
  delete UserBadgeAwardedEmail_reflection_;
}

void protobuf_AddDesc_UserBadgeAwardedEmail_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_UserBadgeAwardedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033UserBadgeAwardedEmail.proto\022\"SolasMatc"
    "h.Common.Protobufs.Emails\032\022EmailMessage."
    "proto\"\234\001\n\025UserBadgeAwardedEmail\022`\n\nemail"
    "_type\030\001 \002(\01625.SolasMatch.Common.Protobuf"
    "s.Emails.EmailMessage.Type:\025UserBadgeAwa"
    "rdedEmail\022\017\n\007user_id\030\002 \002(\005\022\020\n\010badge_id\030\003"
    " \002(\005", 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserBadgeAwardedEmail.proto", &protobuf_RegisterTypes);
  UserBadgeAwardedEmail::default_instance_ = new UserBadgeAwardedEmail();
  UserBadgeAwardedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserBadgeAwardedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserBadgeAwardedEmail_2eproto {
  StaticDescriptorInitializer_UserBadgeAwardedEmail_2eproto() {
    protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  }
} static_descriptor_initializer_UserBadgeAwardedEmail_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserBadgeAwardedEmail::kEmailTypeFieldNumber;
const int UserBadgeAwardedEmail::kUserIdFieldNumber;
const int UserBadgeAwardedEmail::kBadgeIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserBadgeAwardedEmail::UserBadgeAwardedEmail()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
}

void UserBadgeAwardedEmail::InitAsDefaultInstance() {
}

UserBadgeAwardedEmail::UserBadgeAwardedEmail(const UserBadgeAwardedEmail& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
}

void UserBadgeAwardedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 22;
  user_id_ = 0;
  badge_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserBadgeAwardedEmail::~UserBadgeAwardedEmail() {
  // @@protoc_insertion_point(destructor:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  SharedDtor();
}

void UserBadgeAwardedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserBadgeAwardedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserBadgeAwardedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserBadgeAwardedEmail_descriptor_;
}

const UserBadgeAwardedEmail& UserBadgeAwardedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserBadgeAwardedEmail_2eproto();
  return *default_instance_;
}

UserBadgeAwardedEmail* UserBadgeAwardedEmail::default_instance_ = NULL;

UserBadgeAwardedEmail* UserBadgeAwardedEmail::New(::google::protobuf::Arena* arena) const {
  UserBadgeAwardedEmail* n = new UserBadgeAwardedEmail;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserBadgeAwardedEmail::Clear() {
// @@protoc_insertion_point(message_clear_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(UserBadgeAwardedEmail, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<UserBadgeAwardedEmail*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(user_id_, badge_id_);
    email_type_ = 22;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UserBadgeAwardedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value)) {
            set_email_type(static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_user_id;
        break;
      }

      // required int32 user_id = 2;
      case 2: {
        if (tag == 16) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_badge_id;
        break;
      }

      // required int32 badge_id = 3;
      case 3: {
        if (tag == 24) {
         parse_badge_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &badge_id_)));
          set_has_badge_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  return false;
#undef DO_
}

void UserBadgeAwardedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 user_id = 2;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->user_id(), output);
  }

  // required int32 badge_id = 3;
  if (has_badge_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->badge_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
}

::google::protobuf::uint8* UserBadgeAwardedEmail::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 user_id = 2;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->user_id(), target);
  }

  // required int32 badge_id = 3;
  if (has_badge_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->badge_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  return target;
}

int UserBadgeAwardedEmail::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  int total_size = 0;

  if (has_email_type()) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
  }

  if (has_user_id()) {
    // required int32 user_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->user_id());
  }

  if (has_badge_id()) {
    // required int32 badge_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->badge_id());
  }

  return total_size;
}
int UserBadgeAwardedEmail::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());

    // required int32 user_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->user_id());

    // required int32 badge_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->badge_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UserBadgeAwardedEmail::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UserBadgeAwardedEmail* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UserBadgeAwardedEmail>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
    MergeFrom(*source);
  }
}

void UserBadgeAwardedEmail::MergeFrom(const UserBadgeAwardedEmail& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_badge_id()) {
      set_badge_id(from.badge_id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UserBadgeAwardedEmail::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserBadgeAwardedEmail::CopyFrom(const UserBadgeAwardedEmail& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserBadgeAwardedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UserBadgeAwardedEmail::Swap(UserBadgeAwardedEmail* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserBadgeAwardedEmail::InternalSwap(UserBadgeAwardedEmail* other) {
  std::swap(email_type_, other->email_type_);
  std::swap(user_id_, other->user_id_);
  std::swap(badge_id_, other->badge_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserBadgeAwardedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserBadgeAwardedEmail_descriptor_;
  metadata.reflection = UserBadgeAwardedEmail_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserBadgeAwardedEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserBadgeAwardedEmail];
bool UserBadgeAwardedEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UserBadgeAwardedEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
void UserBadgeAwardedEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void UserBadgeAwardedEmail::clear_email_type() {
  email_type_ = 22;
  clear_has_email_type();
}
 ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type UserBadgeAwardedEmail::email_type() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.email_type)
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
 void UserBadgeAwardedEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.email_type)
}

// required int32 user_id = 2;
bool UserBadgeAwardedEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UserBadgeAwardedEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000002u;
}
void UserBadgeAwardedEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void UserBadgeAwardedEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
 ::google::protobuf::int32 UserBadgeAwardedEmail::user_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.user_id)
  return user_id_;
}
 void UserBadgeAwardedEmail::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.user_id)
}

// required int32 badge_id = 3;
bool UserBadgeAwardedEmail::has_badge_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void UserBadgeAwardedEmail::set_has_badge_id() {
  _has_bits_[0] |= 0x00000004u;
}
void UserBadgeAwardedEmail::clear_has_badge_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void UserBadgeAwardedEmail::clear_badge_id() {
  badge_id_ = 0;
  clear_has_badge_id();
}
 ::google::protobuf::int32 UserBadgeAwardedEmail::badge_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.badge_id)
  return badge_id_;
}
 void UserBadgeAwardedEmail::set_badge_id(::google::protobuf::int32 value) {
  set_has_badge_id();
  badge_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserBadgeAwardedEmail.badge_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
