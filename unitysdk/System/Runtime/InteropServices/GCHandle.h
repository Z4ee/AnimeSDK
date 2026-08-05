#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandleType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0xA02C50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1E123AC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET UNITYSDK_OFFSET(0x1E123AB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x1E123B70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA02CE0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E123AE0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET UNITYSDK_OFFSET(0xA02C60)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1E123C00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1E123A50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET UNITYSDK_OFFSET(0x1E1238A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1E123930)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x669870)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA02BB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E123B80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E123B00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E123AF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA02C20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET UNITYSDK_OFFSET(0x1E123C70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA02B50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA02B80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GCHandle_TypeDefinitionIndex = 1435;

	struct alignas(4) GCHandle
	{
		::System::Int32 handle; // 0x10

		::System::Void _ctor(::System::IntPtr h)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_OFFSET))(this, h);
		}

		::System::Void _ctor_1(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_1_OFFSET))(this, obj);
		}

		::System::Void _ctor_2(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_2_OFFSET))(this, value, type);
		}

		::System::Boolean get_IsAllocated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET))(this);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET))(this, value);
		}

		::System::IntPtr AddrOfPinnedObject()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET))(this);
		}

		static ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET))(value);
		}

		static ::System::Runtime::InteropServices::GCHandle Alloc_1(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_1_OFFSET))(value, type);
		}

		::System::Void Free()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET))(this);
		}

		static ::System::IntPtr op_Explicit(::System::Runtime::InteropServices::GCHandle value)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET))(value);
		}

		static ::System::Runtime::InteropServices::GCHandle op_Explicit_1(::System::IntPtr value)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_1_OFFSET))(value);
		}

		static ::System::Boolean CheckCurrentDomain(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET))(handle);
		}

		static ::System::Object* GetTarget(::System::Int32 handle)
		{
			return ((::System::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET))(handle);
		}

		static ::System::Int32 GetTargetHandle(::System::Object* obj, ::System::Int32 handle, ::System::Runtime::InteropServices::GCHandleType type)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Int32, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET))(obj, handle, type);
		}

		static ::System::Void FreeHandle(::System::Int32 handle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET))(handle);
		}

		static ::System::IntPtr GetAddrOfPinnedObject(::System::Int32 handle)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET))(handle);
		}

		static ::System::Boolean op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::GCHandle, ::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr value)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET))(value);
		}

		static ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle value)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET))(value);
		}
	};
}
