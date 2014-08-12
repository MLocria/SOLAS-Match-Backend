// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WorkflowNode.proto

#ifndef PROTOBUF_WorkflowNode_2eproto__INCLUDED
#define PROTOBUF_WorkflowNode_2eproto__INCLUDED

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
#include "Task.pb.h"
// @@protoc_insertion_point(includes)

namespace SolasMatch {
namespace Common {
namespace Protobufs {
namespace Models {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_WorkflowNode_2eproto();
void protobuf_AssignDesc_WorkflowNode_2eproto();
void protobuf_ShutdownFile_WorkflowNode_2eproto();

class WorkflowNode;

// ===================================================================

class WorkflowNode : public ::google::protobuf::Message {
 public:
  WorkflowNode();
  virtual ~WorkflowNode();
  
  WorkflowNode(const WorkflowNode& from);
  
  inline WorkflowNode& operator=(const WorkflowNode& from) {
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
  static const WorkflowNode& default_instance();
  
  void Swap(WorkflowNode* other);
  
  // implements Message ----------------------------------------------
  
  WorkflowNode* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorkflowNode& from);
  void MergeFrom(const WorkflowNode& from);
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
  
  // required int32 taskId = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIdFieldNumber = 1;
  inline ::google::protobuf::int32 taskid() const;
  inline void set_taskid(::google::protobuf::int32 value);
  
  // optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
  inline bool has_task() const;
  inline void clear_task();
  static const int kTaskFieldNumber = 2;
  inline const ::SolasMatch::Common::Protobufs::Models::Task& task() const;
  inline ::SolasMatch::Common::Protobufs::Models::Task* mutable_task();
  inline ::SolasMatch::Common::Protobufs::Models::Task* release_task();
  
  // repeated int32 next = 3;
  inline int next_size() const;
  inline void clear_next();
  static const int kNextFieldNumber = 3;
  inline ::google::protobuf::int32 next(int index) const;
  inline void set_next(int index, ::google::protobuf::int32 value);
  inline void add_next(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      next() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_next();
  
  // repeated int32 previous = 4;
  inline int previous_size() const;
  inline void clear_previous();
  static const int kPreviousFieldNumber = 4;
  inline ::google::protobuf::int32 previous(int index) const;
  inline void set_previous(int index, ::google::protobuf::int32 value);
  inline void add_previous(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      previous() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_previous();
  
  // @@protoc_insertion_point(class_scope:SolasMatch.Common.Protobufs.Models.WorkflowNode)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_task();
  inline void clear_has_task();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::SolasMatch::Common::Protobufs::Models::Task* task_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > next_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > previous_;
  ::google::protobuf::int32 taskid_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_WorkflowNode_2eproto();
  friend void protobuf_AssignDesc_WorkflowNode_2eproto();
  friend void protobuf_ShutdownFile_WorkflowNode_2eproto();
  
  void InitAsDefaultInstance();
  static WorkflowNode* default_instance_;
};
// ===================================================================


// ===================================================================

// WorkflowNode

// required int32 taskId = 1;
inline bool WorkflowNode::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorkflowNode::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorkflowNode::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorkflowNode::clear_taskid() {
  taskid_ = 0;
  clear_has_taskid();
}
inline ::google::protobuf::int32 WorkflowNode::taskid() const {
  return taskid_;
}
inline void WorkflowNode::set_taskid(::google::protobuf::int32 value) {
  set_has_taskid();
  taskid_ = value;
}

// optional .SolasMatch.Common.Protobufs.Models.Task task = 2;
inline bool WorkflowNode::has_task() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorkflowNode::set_has_task() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorkflowNode::clear_has_task() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorkflowNode::clear_task() {
  if (task_ != NULL) task_->::SolasMatch::Common::Protobufs::Models::Task::Clear();
  clear_has_task();
}
inline const ::SolasMatch::Common::Protobufs::Models::Task& WorkflowNode::task() const {
  return task_ != NULL ? *task_ : *default_instance_->task_;
}
inline ::SolasMatch::Common::Protobufs::Models::Task* WorkflowNode::mutable_task() {
  set_has_task();
  if (task_ == NULL) task_ = new ::SolasMatch::Common::Protobufs::Models::Task;
  return task_;
}
inline ::SolasMatch::Common::Protobufs::Models::Task* WorkflowNode::release_task() {
  clear_has_task();
  ::SolasMatch::Common::Protobufs::Models::Task* temp = task_;
  task_ = NULL;
  return temp;
}

// repeated int32 next = 3;
inline int WorkflowNode::next_size() const {
  return next_.size();
}
inline void WorkflowNode::clear_next() {
  next_.Clear();
}
inline ::google::protobuf::int32 WorkflowNode::next(int index) const {
  return next_.Get(index);
}
inline void WorkflowNode::set_next(int index, ::google::protobuf::int32 value) {
  next_.Set(index, value);
}
inline void WorkflowNode::add_next(::google::protobuf::int32 value) {
  next_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
WorkflowNode::next() const {
  return next_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
WorkflowNode::mutable_next() {
  return &next_;
}

// repeated int32 previous = 4;
inline int WorkflowNode::previous_size() const {
  return previous_.size();
}
inline void WorkflowNode::clear_previous() {
  previous_.Clear();
}
inline ::google::protobuf::int32 WorkflowNode::previous(int index) const {
  return previous_.Get(index);
}
inline void WorkflowNode::set_previous(int index, ::google::protobuf::int32 value) {
  previous_.Set(index, value);
}
inline void WorkflowNode::add_previous(::google::protobuf::int32 value) {
  previous_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
WorkflowNode::previous() const {
  return previous_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
WorkflowNode::mutable_previous() {
  return &previous_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Models
}  // namespace Protobufs
}  // namespace Common
}  // namespace SolasMatch

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WorkflowNode_2eproto__INCLUDED
