#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET UNITYSDK_OFFSET(0x1ED03BF0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINCLASS_OFFSET UNITYSDK_OFFSET(0x1ED039B0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINSTRUCT_OFFSET UNITYSDK_OFFSET(0x1ED039A0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSET_OFFSET UNITYSDK_OFFSET(0x1ED039C0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1ED04310)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET UNITYSDK_OFFSET(0x1ED03D10)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1ED041E0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1ED03C70)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET UNITYSDK_OFFSET(0x1ED03C60)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET UNITYSDK_OFFSET(0x1ED03BE0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET UNITYSDK_OFFSET(0x1ED03C30)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET UNITYSDK_OFFSET(0x1ED03C40)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET UNITYSDK_OFFSET(0x1ED03C10)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET UNITYSDK_OFFSET(0x1ED03C00)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET UNITYSDK_OFFSET(0x1ED03C20)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCARRAYANDGETDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x1ED03BB0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCOBJECTANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1ED03B90)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMARRAYANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1ED03BC0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMOBJECTANDGETADDRESS_OFFSET UNITYSDK_OFFSET(0x1ED03BA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_RELEASEGCOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED03BD0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET UNITYSDK_OFFSET(0x1ED03C50)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeUtility_TypeDefinitionIndex = 4005;

	class UnsafeUtility : public ::System::Object
	{
	public:
		static ::System::Int32 GetFieldOffsetInStruct(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINSTRUCT_OFFSET))(a1);
		}

		static ::System::Int32 GetFieldOffsetInClass(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSETINCLASS_OFFSET))(a1);
		}

		static ::System::Int32 GetFieldOffset(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETFIELDOFFSET_OFFSET))(a1);
		}

		static ::System::Void* PinGCObjectAndGetAddress(::System::Object* a1, ::System::UInt64& a2)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCOBJECTANDGETADDRESS_OFFSET))(a1, a2);
		}

		static ::System::Void* PinGCArrayAndGetDataAddress(::System::Array* a1, ::System::UInt64& a2)
		{
			return ((::System::Void*(*)(::System::Array*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINGCARRAYANDGETDATAADDRESS_OFFSET))(a1, a2);
		}

		static ::System::Void* PinSystemArrayAndGetAddress(::System::Object* a1, ::System::UInt64& a2)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMARRAYANDGETADDRESS_OFFSET))(a1, a2);
		}

		static ::System::Void* PinSystemObjectAndGetAddress(::System::Object* a1, ::System::UInt64& a2)
		{
			return ((::System::Void*(*)(::System::Object*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_PINSYSTEMOBJECTANDGETADDRESS_OFFSET))(a1, a2);
		}

		static ::System::Void ReleaseGCObject(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_RELEASEGCOBJECT_OFFSET))(a1);
		}

		static ::System::Void* Malloc(::System::Int64 a1, ::System::Int32 a2, ::Unity::Collections::Allocator a3)
		{
			return ((::System::Void*(*)(::System::Int64, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MALLOC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Free(::System::Void* a1, ::Unity::Collections::Allocator a2)
		{
			return ((::System::Void(*)(::System::Void*, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_FREE_OFFSET))(a1, a2);
		}

		static ::System::Void MemCpy(::System::Void* a1, ::System::Void* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MemCpyStride(::System::Void* a1, ::System::Int32 a2, ::System::Void* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCPYSTRIDE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void MemSet(::System::Void* a1, ::System::Byte a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Byte, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMSET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MemClear(::System::Void* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCLEAR_OFFSET))(a1, a2);
		}

		static ::System::Int32 MemCmp(::System::Void* a1, ::System::Void* a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::System::Void*, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_MEMCMP_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 SizeOf(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_SIZEOF_OFFSET))(a1);
		}

		static ::System::Boolean IsBlittable(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsBlittableValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISBLITTABLEVALUETYPE_OFFSET))(a1);
		}

		static ::System::String* GetReasonForTypeNonBlittableImpl(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORTYPENONBLITTABLEIMPL_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsArrayBlittable(::System::Array* a1)
		{
			return ((::System::Boolean(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_ISARRAYBLITTABLE_OFFSET))(a1);
		}

		static ::System::String* GetReasonForArrayNonBlittable(::System::Array* a1)
		{
			return ((::System::String*(*)(::System::Array*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEUTILITY_GETREASONFORARRAYNONBLITTABLE_OFFSET))(a1);
		}
	};
}
