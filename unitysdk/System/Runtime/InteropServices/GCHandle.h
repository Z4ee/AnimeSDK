#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandleType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x3B91FB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_1_OFFSET UNITYSDK_OFFSET(0x1C458340)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET UNITYSDK_OFFSET(0x1C458330)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET UNITYSDK_OFFSET(0x1C458410)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B92020)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C4583B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET UNITYSDK_OFFSET(0x3B91FC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1C4584A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1C4582D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET UNITYSDK_OFFSET(0x1C458160)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1C4581D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0xD328C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x3B91F30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C458420)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1C4583D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1C4583C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x3B91F80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET UNITYSDK_OFFSET(0x1C4584E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B91ED0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B91F00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GCHandle_TypeDefinitionIndex = 1435;

	struct alignas(4) GCHandle
	{
		::System::Int32 handle; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::Runtime::InteropServices::GCHandleType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsAllocated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_ISALLOCATED_OFFSET))(this);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_Target(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_SET_TARGET_OFFSET))(this, a1);
		}

		::System::IntPtr AddrOfPinnedObject()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ADDROFPINNEDOBJECT_OFFSET))(this);
		}

		static ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* a1)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_OFFSET))(a1);
		}

		static ::System::Runtime::InteropServices::GCHandle Alloc_1(::System::Object* a1, ::System::Runtime::InteropServices::GCHandleType a2)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::Object*, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_ALLOC_1_OFFSET))(a1, a2);
		}

		::System::Void Free()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREE_OFFSET))(this);
		}

		static ::System::IntPtr op_Explicit(::System::Runtime::InteropServices::GCHandle a1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::Runtime::InteropServices::GCHandle op_Explicit_1(::System::IntPtr a1)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Boolean CheckCurrentDomain(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_CHECKCURRENTDOMAIN_OFFSET))(a1);
		}

		static ::System::Object* GetTarget(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGET_OFFSET))(a1);
		}

		static ::System::Int32 GetTargetHandle(::System::Object* a1, ::System::Int32 a2, ::System::Runtime::InteropServices::GCHandleType a3)
		{
			return ((::System::Int32(*)(::System::Object*, ::System::Int32, ::System::Runtime::InteropServices::GCHandleType))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETTARGETHANDLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FreeHandle(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FREEHANDLE_OFFSET))(a1);
		}

		static ::System::IntPtr GetAddrOfPinnedObject(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETADDROFPINNEDOBJECT_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::System::Runtime::InteropServices::GCHandle a1, ::System::Runtime::InteropServices::GCHandle a2)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::GCHandle, ::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr a1)
		{
			return ((::System::Runtime::InteropServices::GCHandle(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_FROMINTPTR_OFFSET))(a1);
		}

		static ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle a1)
		{
			return ((::System::IntPtr(*)(::System::Runtime::InteropServices::GCHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLE_TOINTPTR_OFFSET))(a1);
		}
	};
}
