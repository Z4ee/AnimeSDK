#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET UNITYSDK_OFFSET(0x1A4235B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINCLASS_OFFSET UNITYSDK_OFFSET(0x1A423490)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A423480)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x1A4234A0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1A4238E0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET UNITYSDK_OFFSET(0x1A423670)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1A423870)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A423630)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1A423620)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET UNITYSDK_OFFSET(0x1A4235A0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET UNITYSDK_OFFSET(0x1A4235F0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET UNITYSDK_OFFSET(0x1A423600)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET UNITYSDK_OFFSET(0x1A4235D0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET UNITYSDK_OFFSET(0x1A4235C0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET UNITYSDK_OFFSET(0x1A4235E0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCARRAYANDGETDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x1A423570)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCOBJECTANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1A423550)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMARRAYANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1A423580)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMOBJECTANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1A423560)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_RELEASEGCOBJECT_OFFSET UNITYSDK_OFFSET(0x1A423590)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET UNITYSDK_OFFSET(0x1A423610)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_TypeDefinitionIndex = 3818;

	class UnsafeUtility : public ::System::Object
	{
	public:
		static ::System::Int32 GetFieldOffsetInStruct(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINSTRUCT_OFFSET))(field);
		}

		static ::System::Int32 GetFieldOffsetInClass(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINCLASS_OFFSET))(field);
		}

		static ::System::Int32 GetFieldOffset(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSET_OFFSET))(field);
		}

		static ::System::Void* PinGCObjectAndGetAddress(::System::Object* target, ::System::UInt64& gcHandle)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCOBJECTANDGETADDRESS_OFFSET))(target, gcHandle);
		}

		static ::System::Void* PinGCArrayAndGetDataAddress(::System::Array* target, ::System::UInt64& gcHandle)
		{
			return ((::System::Void*(*)(::System::Array*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCARRAYANDGETDATAADDRESS_OFFSET))(target, gcHandle);
		}

		static ::System::Void* PinSystemArrayAndGetAddress(::System::Object* target, ::System::UInt64& gcHandle)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMARRAYANDGETADDRESS_OFFSET))(target, gcHandle);
		}

		static ::System::Void* PinSystemObjectAndGetAddress(::System::Object* target, ::System::UInt64& gcHandle)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMOBJECTANDGETADDRESS_OFFSET))(target, gcHandle);
		}

		static ::System::Void ReleaseGCObject(::System::UInt64 gcHandle)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_RELEASEGCOBJECT_OFFSET))(gcHandle);
		}

		static ::System::Void* Malloc(::System::Int64 size, ::System::Int32 alignment, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void*(*)(::System::Int64, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET))(size, alignment, allocator);
		}

		static ::System::Void Free(::System::Void* memory, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::System::Void*, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET))(memory, allocator);
		}

		static ::System::Void MemCpy(::System::Void* destination, ::System::Void* source, ::System::Int64 size)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET))(destination, source, size);
		}

		static ::System::Void MemCpyStride(::System::Void* destination, ::System::Int32 destinationStride, ::System::Void* source, ::System::Int32 sourceStride, ::System::Int32 elementSize, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET))(destination, destinationStride, source, sourceStride, elementSize, count);
		}

		static ::System::Void MemSet(::System::Void* destination, ::System::Byte value, ::System::Int64 size)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET))(destination, value, size);
		}

		static ::System::Void MemClear(::System::Void* destination, ::System::Int64 size)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET))(destination, size);
		}

		static ::System::Int32 MemCmp(::System::Void* ptr1, ::System::Void* ptr2, ::System::Int64 size)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET))(ptr1, ptr2, size);
		}

		static ::System::Int32 SizeOf(::System::Type* type)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET))(type);
		}

		static ::System::Boolean IsBlittable(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET))(type);
		}

		static ::System::Boolean IsBlittableValueType(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET))(t);
		}

		static ::System::String* GetReasonForTypeNonBlittableImpl(::System::Type* t, ::System::String* name)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET))(t, name);
		}

		static ::System::Boolean IsArrayBlittable(::System::Array* arr)
		{
			return ((::System::Boolean(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET))(arr);
		}

		static ::System::String* GetReasonForArrayNonBlittable(::System::Array* arr)
		{
			return ((::System::String*(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET))(arr);
		}
	};
}
