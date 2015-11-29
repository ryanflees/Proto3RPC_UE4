// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_arena_import.proto

#if WITH_GOOGLE_PROTOBUF_BINDING == 1
#include "AllowWindowsPlatformTypes.h"
#endif // WITH_GOOGLE_PROTOBUF_BINDING

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning(push)
#pragma warning(disable : 4530)	// warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4512)	// warning C4512: assignment operator could not be generated
#pragma warning(disable : 4244)	// warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)	// warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)	// warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)	// warning C4127: conditional expression is constant
#pragma warning(disable : 4100)	// warning C4100: 'op' : unreferenced formal parameter
#endif // _PS3
#endif // _MSC_VER
#if _GNUC
#ifndef _PS3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif // _PS3
#endif // _GNUC

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/unittest_no_arena_import.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto2_arena_unittest {

namespace {

const ::google::protobuf::Descriptor* ImportNoArenaNestedMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImportNoArenaNestedMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_no_arena_import.proto");
  GOOGLE_CHECK(file != NULL);
  ImportNoArenaNestedMessage_descriptor_ = file->message_type(0);
  static const int ImportNoArenaNestedMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportNoArenaNestedMessage, d_),
  };
  ImportNoArenaNestedMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ImportNoArenaNestedMessage_descriptor_,
      ImportNoArenaNestedMessage::default_instance_,
      ImportNoArenaNestedMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportNoArenaNestedMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(ImportNoArenaNestedMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImportNoArenaNestedMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ImportNoArenaNestedMessage_descriptor_, &ImportNoArenaNestedMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto() {
  delete ImportNoArenaNestedMessage::default_instance_;
  delete ImportNoArenaNestedMessage_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n.google/protobuf/unittest_no_arena_impo"
    "rt.proto\022\025proto2_arena_unittest\"\'\n\032Impor"
    "tNoArenaNestedMessage\022\t\n\001d\030\001 \001(\005", 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_no_arena_import.proto", &protobuf_RegisterTypes);
  ImportNoArenaNestedMessage::default_instance_ = new ImportNoArenaNestedMessage();
  ImportNoArenaNestedMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int ImportNoArenaNestedMessage::kDFieldNumber;
#endif  // !_MSC_VER

ImportNoArenaNestedMessage::ImportNoArenaNestedMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
}

void ImportNoArenaNestedMessage::InitAsDefaultInstance() {
}

ImportNoArenaNestedMessage::ImportNoArenaNestedMessage(const ImportNoArenaNestedMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
}

void ImportNoArenaNestedMessage::SharedCtor() {
  _cached_size_ = 0;
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ImportNoArenaNestedMessage::~ImportNoArenaNestedMessage() {
  // @@protoc_insertion_point(destructor:proto2_arena_unittest.ImportNoArenaNestedMessage)
  SharedDtor();
}

void ImportNoArenaNestedMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ImportNoArenaNestedMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImportNoArenaNestedMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImportNoArenaNestedMessage_descriptor_;
}

const ImportNoArenaNestedMessage& ImportNoArenaNestedMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fno_5farena_5fimport_2eproto();
  return *default_instance_;
}

ImportNoArenaNestedMessage* ImportNoArenaNestedMessage::default_instance_ = NULL;

ImportNoArenaNestedMessage* ImportNoArenaNestedMessage::New(::google::protobuf::Arena* arena) const {
  ImportNoArenaNestedMessage* n = new ImportNoArenaNestedMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ImportNoArenaNestedMessage::Clear() {
  d_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ImportNoArenaNestedMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 d = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &d_)));
          set_has_d();
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
  // @@protoc_insertion_point(parse_success:proto2_arena_unittest.ImportNoArenaNestedMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto2_arena_unittest.ImportNoArenaNestedMessage)
  return false;
#undef DO_
}

void ImportNoArenaNestedMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  // optional int32 d = 1;
  if (has_d()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->d(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto2_arena_unittest.ImportNoArenaNestedMessage)
}

::google::protobuf::uint8* ImportNoArenaNestedMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_arena_unittest.ImportNoArenaNestedMessage)
  // optional int32 d = 1;
  if (has_d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->d(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_arena_unittest.ImportNoArenaNestedMessage)
  return target;
}

int ImportNoArenaNestedMessage::ByteSize() const {
  int total_size = 0;

  // optional int32 d = 1;
  if (has_d()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->d());
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

void ImportNoArenaNestedMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ImportNoArenaNestedMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ImportNoArenaNestedMessage>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ImportNoArenaNestedMessage::MergeFrom(const ImportNoArenaNestedMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_d()) {
      set_d(from.d());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ImportNoArenaNestedMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImportNoArenaNestedMessage::CopyFrom(const ImportNoArenaNestedMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImportNoArenaNestedMessage::IsInitialized() const {

  return true;
}

void ImportNoArenaNestedMessage::Swap(ImportNoArenaNestedMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ImportNoArenaNestedMessage::InternalSwap(ImportNoArenaNestedMessage* other) {
  std::swap(d_, other->d_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ImportNoArenaNestedMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImportNoArenaNestedMessage_descriptor_;
  metadata.reflection = ImportNoArenaNestedMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ImportNoArenaNestedMessage

// optional int32 d = 1;
bool ImportNoArenaNestedMessage::has_d() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ImportNoArenaNestedMessage::set_has_d() {
  _has_bits_[0] |= 0x00000001u;
}
void ImportNoArenaNestedMessage::clear_has_d() {
  _has_bits_[0] &= ~0x00000001u;
}
void ImportNoArenaNestedMessage::clear_d() {
  d_ = 0;
  clear_has_d();
}
 ::google::protobuf::int32 ImportNoArenaNestedMessage::d() const {
  // @@protoc_insertion_point(field_get:proto2_arena_unittest.ImportNoArenaNestedMessage.d)
  return d_;
}
 void ImportNoArenaNestedMessage::set_d(::google::protobuf::int32 value) {
  set_has_d();
  d_ = value;
  // @@protoc_insertion_point(field_set:proto2_arena_unittest.ImportNoArenaNestedMessage.d)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_arena_unittest

// @@protoc_insertion_point(global_scope)

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning( pop )
#endif // _PS3
#endif // _MSC_VER
#if _GNUC
#ifndef _PS3
#pragma GCC diagnostic pop
#endif // _PS3
#endif // _GNUC

