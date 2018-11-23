// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserTaskRevokedEmail.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UserTaskRevokedEmail.pb.h"

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

const ::google::protobuf::Descriptor* UserTaskRevokedEmail_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UserTaskRevokedEmail_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UserTaskRevokedEmail_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_UserTaskRevokedEmail_2eproto() {
  protobuf_AddDesc_UserTaskRevokedEmail_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UserTaskRevokedEmail.proto");
  GOOGLE_CHECK(file != NULL);
  UserTaskRevokedEmail_descriptor_ = file->message_type(0);
  static const int UserTaskRevokedEmail_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskRevokedEmail, email_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskRevokedEmail, task_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskRevokedEmail, user_id_),
  };
  UserTaskRevokedEmail_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UserTaskRevokedEmail_descriptor_,
      UserTaskRevokedEmail::default_instance_,
      UserTaskRevokedEmail_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskRevokedEmail, _has_bits_[0]),
      -1,
      -1,
      sizeof(UserTaskRevokedEmail),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UserTaskRevokedEmail, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UserTaskRevokedEmail_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UserTaskRevokedEmail_descriptor_, &UserTaskRevokedEmail::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UserTaskRevokedEmail_2eproto() {
  delete UserTaskRevokedEmail::default_instance_;
  delete UserTaskRevokedEmail_reflection_;
}

void protobuf_AddDesc_UserTaskRevokedEmail_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_UserTaskRevokedEmail_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::SolasMatch::Common::Protobufs::Emails::protobuf_AddDesc_EmailMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032UserTaskRevokedEmail.proto\022\"SolasMatch"
    ".Common.Protobufs.Emails\032\022EmailMessage.p"
    "roto\"\231\001\n\024UserTaskRevokedEmail\022_\n\nemail_t"
    "ype\030\001 \002(\01625.SolasMatch.Common.Protobufs."
    "Emails.EmailMessage.Type:\024UserTaskRevoke"
    "dEmail\022\017\n\007task_id\030\002 \002(\005\022\017\n\007user_id\030\003 \002(\005", 240);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UserTaskRevokedEmail.proto", &protobuf_RegisterTypes);
  UserTaskRevokedEmail::default_instance_ = new UserTaskRevokedEmail();
  UserTaskRevokedEmail::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UserTaskRevokedEmail_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UserTaskRevokedEmail_2eproto {
  StaticDescriptorInitializer_UserTaskRevokedEmail_2eproto() {
    protobuf_AddDesc_UserTaskRevokedEmail_2eproto();
  }
} static_descriptor_initializer_UserTaskRevokedEmail_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserTaskRevokedEmail::kEmailTypeFieldNumber;
const int UserTaskRevokedEmail::kTaskIdFieldNumber;
const int UserTaskRevokedEmail::kUserIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserTaskRevokedEmail::UserTaskRevokedEmail()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
}

void UserTaskRevokedEmail::InitAsDefaultInstance() {
}

UserTaskRevokedEmail::UserTaskRevokedEmail(const UserTaskRevokedEmail& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
}

void UserTaskRevokedEmail::SharedCtor() {
  _cached_size_ = 0;
  email_type_ = 24;
  task_id_ = 0;
  user_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UserTaskRevokedEmail::~UserTaskRevokedEmail() {
  // @@protoc_insertion_point(destructor:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  SharedDtor();
}

void UserTaskRevokedEmail::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UserTaskRevokedEmail::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserTaskRevokedEmail::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UserTaskRevokedEmail_descriptor_;
}

const UserTaskRevokedEmail& UserTaskRevokedEmail::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UserTaskRevokedEmail_2eproto();
  return *default_instance_;
}

UserTaskRevokedEmail* UserTaskRevokedEmail::default_instance_ = NULL;

UserTaskRevokedEmail* UserTaskRevokedEmail::New(::google::protobuf::Arena* arena) const {
  UserTaskRevokedEmail* n = new UserTaskRevokedEmail;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserTaskRevokedEmail::Clear() {
// @@protoc_insertion_point(message_clear_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(UserTaskRevokedEmail, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<UserTaskRevokedEmail*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(task_id_, user_id_);
    email_type_ = 24;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UserTaskRevokedEmail::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
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
        if (input->ExpectTag(16)) goto parse_task_id;
        break;
      }

      // required int32 task_id = 2;
      case 2: {
        if (tag == 16) {
         parse_task_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &task_id_)));
          set_has_task_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_user_id;
        break;
      }

      // required int32 user_id = 3;
      case 3: {
        if (tag == 24) {
         parse_user_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &user_id_)));
          set_has_user_id();
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
  // @@protoc_insertion_point(parse_success:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  return false;
#undef DO_
}

void UserTaskRevokedEmail::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
  if (has_email_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->email_type(), output);
  }

  // required int32 task_id = 2;
  if (has_task_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->task_id(), output);
  }

  // required int32 user_id = 3;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->user_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
}

::google::protobuf::uint8* UserTaskRevokedEmail::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
  if (has_email_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->email_type(), target);
  }

  // required int32 task_id = 2;
  if (has_task_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->task_id(), target);
  }

  // required int32 user_id = 3;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->user_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  return target;
}

int UserTaskRevokedEmail::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  int total_size = 0;

  if (has_email_type()) {
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());
  }

  if (has_task_id()) {
    // required int32 task_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->task_id());
  }

  if (has_user_id()) {
    // required int32 user_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->user_id());
  }

  return total_size;
}
int UserTaskRevokedEmail::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->email_type());

    // required int32 task_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->task_id());

    // required int32 user_id = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->user_id());

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

void UserTaskRevokedEmail::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const UserTaskRevokedEmail* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const UserTaskRevokedEmail>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
    MergeFrom(*source);
  }
}

void UserTaskRevokedEmail::MergeFrom(const UserTaskRevokedEmail& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_email_type()) {
      set_email_type(from.email_type());
    }
    if (from.has_task_id()) {
      set_task_id(from.task_id());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UserTaskRevokedEmail::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UserTaskRevokedEmail::CopyFrom(const UserTaskRevokedEmail& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserTaskRevokedEmail::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UserTaskRevokedEmail::Swap(UserTaskRevokedEmail* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserTaskRevokedEmail::InternalSwap(UserTaskRevokedEmail* other) {
  std::swap(email_type_, other->email_type_);
  std::swap(task_id_, other->task_id_);
  std::swap(user_id_, other->user_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UserTaskRevokedEmail::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UserTaskRevokedEmail_descriptor_;
  metadata.reflection = UserTaskRevokedEmail_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// UserTaskRevokedEmail

// required .SolasMatch.Common.Protobufs.Emails.EmailMessage.Type email_type = 1 [default = UserTaskRevokedEmail];
bool UserTaskRevokedEmail::has_email_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void UserTaskRevokedEmail::set_has_email_type() {
  _has_bits_[0] |= 0x00000001u;
}
void UserTaskRevokedEmail::clear_has_email_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void UserTaskRevokedEmail::clear_email_type() {
  email_type_ = 24;
  clear_has_email_type();
}
 ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type UserTaskRevokedEmail::email_type() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.email_type)
  return static_cast< ::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type >(email_type_);
}
 void UserTaskRevokedEmail::set_email_type(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type value) {
  assert(::SolasMatch::Common::Protobufs::Emails::EmailMessage_Type_IsValid(value));
  set_has_email_type();
  email_type_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.email_type)
}

// required int32 task_id = 2;
bool UserTaskRevokedEmail::has_task_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void UserTaskRevokedEmail::set_has_task_id() {
  _has_bits_[0] |= 0x00000002u;
}
void UserTaskRevokedEmail::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void UserTaskRevokedEmail::clear_task_id() {
  task_id_ = 0;
  clear_has_task_id();
}
 ::google::protobuf::int32 UserTaskRevokedEmail::task_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.task_id)
  return task_id_;
}
 void UserTaskRevokedEmail::set_task_id(::google::protobuf::int32 value) {
  set_has_task_id();
  task_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.task_id)
}

// required int32 user_id = 3;
bool UserTaskRevokedEmail::has_user_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void UserTaskRevokedEmail::set_has_user_id() {
  _has_bits_[0] |= 0x00000004u;
}
void UserTaskRevokedEmail::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void UserTaskRevokedEmail::clear_user_id() {
  user_id_ = 0;
  clear_has_user_id();
}
 ::google::protobuf::int32 UserTaskRevokedEmail::user_id() const {
  // @@protoc_insertion_point(field_get:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.user_id)
  return user_id_;
}
 void UserTaskRevokedEmail::set_user_id(::google::protobuf::int32 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:SolasMatch.Common.Protobufs.Emails.UserTaskRevokedEmail.user_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Emails
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

// @@protoc_insertion_point(global_scope)
