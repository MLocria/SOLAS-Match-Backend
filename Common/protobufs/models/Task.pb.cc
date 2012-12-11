// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Task.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Task_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Task_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Task_2eproto() {
  protobuf_AddDesc_Task_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Task.proto");
  GOOGLE_CHECK(file != NULL);
  Task_descriptor_ = file->message_type(0);
  static const int Task_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, org_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, title_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, impact_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, reference_page_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, word_count_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, source_lang_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, target_lang_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, created_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, source_region_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, target_region_id_),
  };
  Task_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Task_descriptor_,
      Task::default_instance_,
      Task_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Task, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Task));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Task_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Task_descriptor_, &Task::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Task_2eproto() {
  delete Task::default_instance_;
  delete Task_reflection_;
}

void protobuf_AddDesc_Task_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nTask.proto\"\347\001\n\004Task\022\n\n\002id\030\001 \002(\005\022\016\n\006org"
    "_id\030\002 \001(\005\022\r\n\005title\030\003 \001(\t\022\016\n\006impact\030\004 \001(\t"
    "\022\026\n\016reference_page\030\005 \001(\t\022\022\n\nword_count\030\006"
    " \001(\005\022\026\n\016source_lang_id\030\007 \001(\005\022\026\n\016target_l"
    "ang_id\030\010 \001(\005\022\024\n\014created_time\030\t \001(\t\022\030\n\020so"
    "urce_region_id\030\n \001(\005\022\030\n\020target_region_id"
    "\030\013 \001(\005", 246);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Task.proto", &protobuf_RegisterTypes);
  Task::default_instance_ = new Task();
  Task::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Task_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Task_2eproto {
  StaticDescriptorInitializer_Task_2eproto() {
    protobuf_AddDesc_Task_2eproto();
  }
} static_descriptor_initializer_Task_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Task::kIdFieldNumber;
const int Task::kOrgIdFieldNumber;
const int Task::kTitleFieldNumber;
const int Task::kImpactFieldNumber;
const int Task::kReferencePageFieldNumber;
const int Task::kWordCountFieldNumber;
const int Task::kSourceLangIdFieldNumber;
const int Task::kTargetLangIdFieldNumber;
const int Task::kCreatedTimeFieldNumber;
const int Task::kSourceRegionIdFieldNumber;
const int Task::kTargetRegionIdFieldNumber;
#endif  // !_MSC_VER

Task::Task()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Task::InitAsDefaultInstance() {
}

Task::Task(const Task& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Task::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  org_id_ = 0;
  title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  impact_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  reference_page_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  word_count_ = 0;
  source_lang_id_ = 0;
  target_lang_id_ = 0;
  created_time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  source_region_id_ = 0;
  target_region_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Task::~Task() {
  SharedDtor();
}

void Task::SharedDtor() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (impact_ != &::google::protobuf::internal::kEmptyString) {
    delete impact_;
  }
  if (reference_page_ != &::google::protobuf::internal::kEmptyString) {
    delete reference_page_;
  }
  if (created_time_ != &::google::protobuf::internal::kEmptyString) {
    delete created_time_;
  }
  if (this != default_instance_) {
  }
}

void Task::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Task::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Task_descriptor_;
}

const Task& Task::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Task_2eproto();  return *default_instance_;
}

Task* Task::default_instance_ = NULL;

Task* Task::New() const {
  return new Task;
}

void Task::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    org_id_ = 0;
    if (has_title()) {
      if (title_ != &::google::protobuf::internal::kEmptyString) {
        title_->clear();
      }
    }
    if (has_impact()) {
      if (impact_ != &::google::protobuf::internal::kEmptyString) {
        impact_->clear();
      }
    }
    if (has_reference_page()) {
      if (reference_page_ != &::google::protobuf::internal::kEmptyString) {
        reference_page_->clear();
      }
    }
    word_count_ = 0;
    source_lang_id_ = 0;
    target_lang_id_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_created_time()) {
      if (created_time_ != &::google::protobuf::internal::kEmptyString) {
        created_time_->clear();
      }
    }
    source_region_id_ = 0;
    target_region_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Task::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_org_id;
        break;
      }
      
      // optional int32 org_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_org_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &org_id_)));
          set_has_org_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_title;
        break;
      }
      
      // optional string title = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_title:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->title().data(), this->title().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_impact;
        break;
      }
      
      // optional string impact = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_impact:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_impact()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->impact().data(), this->impact().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_reference_page;
        break;
      }
      
      // optional string reference_page = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_reference_page:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reference_page()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->reference_page().data(), this->reference_page().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_word_count;
        break;
      }
      
      // optional int32 word_count = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_word_count:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &word_count_)));
          set_has_word_count();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_source_lang_id;
        break;
      }
      
      // optional int32 source_lang_id = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_source_lang_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &source_lang_id_)));
          set_has_source_lang_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_target_lang_id;
        break;
      }
      
      // optional int32 target_lang_id = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_lang_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_lang_id_)));
          set_has_target_lang_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_created_time;
        break;
      }
      
      // optional string created_time = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_created_time:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_created_time()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->created_time().data(), this->created_time().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_source_region_id;
        break;
      }
      
      // optional int32 source_region_id = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_source_region_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &source_region_id_)));
          set_has_source_region_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_target_region_id;
        break;
      }
      
      // optional int32 target_region_id = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_target_region_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &target_region_id_)));
          set_has_target_region_id();
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

void Task::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }
  
  // optional int32 org_id = 2;
  if (has_org_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->org_id(), output);
  }
  
  // optional string title = 3;
  if (has_title()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->title().data(), this->title().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->title(), output);
  }
  
  // optional string impact = 4;
  if (has_impact()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->impact().data(), this->impact().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->impact(), output);
  }
  
  // optional string reference_page = 5;
  if (has_reference_page()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reference_page().data(), this->reference_page().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->reference_page(), output);
  }
  
  // optional int32 word_count = 6;
  if (has_word_count()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->word_count(), output);
  }
  
  // optional int32 source_lang_id = 7;
  if (has_source_lang_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->source_lang_id(), output);
  }
  
  // optional int32 target_lang_id = 8;
  if (has_target_lang_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->target_lang_id(), output);
  }
  
  // optional string created_time = 9;
  if (has_created_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->created_time().data(), this->created_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->created_time(), output);
  }
  
  // optional int32 source_region_id = 10;
  if (has_source_region_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->source_region_id(), output);
  }
  
  // optional int32 target_region_id = 11;
  if (has_target_region_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->target_region_id(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Task::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }
  
  // optional int32 org_id = 2;
  if (has_org_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->org_id(), target);
  }
  
  // optional string title = 3;
  if (has_title()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->title().data(), this->title().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->title(), target);
  }
  
  // optional string impact = 4;
  if (has_impact()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->impact().data(), this->impact().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->impact(), target);
  }
  
  // optional string reference_page = 5;
  if (has_reference_page()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->reference_page().data(), this->reference_page().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->reference_page(), target);
  }
  
  // optional int32 word_count = 6;
  if (has_word_count()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->word_count(), target);
  }
  
  // optional int32 source_lang_id = 7;
  if (has_source_lang_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->source_lang_id(), target);
  }
  
  // optional int32 target_lang_id = 8;
  if (has_target_lang_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->target_lang_id(), target);
  }
  
  // optional string created_time = 9;
  if (has_created_time()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->created_time().data(), this->created_time().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        9, this->created_time(), target);
  }
  
  // optional int32 source_region_id = 10;
  if (has_source_region_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->source_region_id(), target);
  }
  
  // optional int32 target_region_id = 11;
  if (has_target_region_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(11, this->target_region_id(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Task::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }
    
    // optional int32 org_id = 2;
    if (has_org_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->org_id());
    }
    
    // optional string title = 3;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }
    
    // optional string impact = 4;
    if (has_impact()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->impact());
    }
    
    // optional string reference_page = 5;
    if (has_reference_page()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reference_page());
    }
    
    // optional int32 word_count = 6;
    if (has_word_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->word_count());
    }
    
    // optional int32 source_lang_id = 7;
    if (has_source_lang_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->source_lang_id());
    }
    
    // optional int32 target_lang_id = 8;
    if (has_target_lang_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_lang_id());
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional string created_time = 9;
    if (has_created_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->created_time());
    }
    
    // optional int32 source_region_id = 10;
    if (has_source_region_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->source_region_id());
    }
    
    // optional int32 target_region_id = 11;
    if (has_target_region_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->target_region_id());
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

void Task::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Task* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Task*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Task::MergeFrom(const Task& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_org_id()) {
      set_org_id(from.org_id());
    }
    if (from.has_title()) {
      set_title(from.title());
    }
    if (from.has_impact()) {
      set_impact(from.impact());
    }
    if (from.has_reference_page()) {
      set_reference_page(from.reference_page());
    }
    if (from.has_word_count()) {
      set_word_count(from.word_count());
    }
    if (from.has_source_lang_id()) {
      set_source_lang_id(from.source_lang_id());
    }
    if (from.has_target_lang_id()) {
      set_target_lang_id(from.target_lang_id());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_created_time()) {
      set_created_time(from.created_time());
    }
    if (from.has_source_region_id()) {
      set_source_region_id(from.source_region_id());
    }
    if (from.has_target_region_id()) {
      set_target_region_id(from.target_region_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Task::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Task::CopyFrom(const Task& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Task::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void Task::Swap(Task* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(org_id_, other->org_id_);
    std::swap(title_, other->title_);
    std::swap(impact_, other->impact_);
    std::swap(reference_page_, other->reference_page_);
    std::swap(word_count_, other->word_count_);
    std::swap(source_lang_id_, other->source_lang_id_);
    std::swap(target_lang_id_, other->target_lang_id_);
    std::swap(created_time_, other->created_time_);
    std::swap(source_region_id_, other->source_region_id_);
    std::swap(target_region_id_, other->target_region_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Task::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Task_descriptor_;
  metadata.reflection = Task_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)