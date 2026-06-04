#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET UNITYSDK_OFFSET(0x3878BD0)
#define UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET UNITYSDK_OFFSET(0x3878D50)
#define UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET UNITYSDK_OFFSET(0x3878C90)
#define UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET UNITYSDK_OFFSET(0x3878DA0)
#define UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3878E00)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x2BC7020)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3878B20)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3878B10)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3878B30)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2BFF410)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1B1621E0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1B1621D0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1623C0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1623D0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B1621C0)
#define UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3878B40)
#define UNITYENGINE_RENDERING_BITARRAY64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3878B60)
#define UNITYENGINE_RENDERING_BITARRAY64__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray64_TypeDefinitionIndex = 33785;

	struct alignas(8) BitArray64
	{
		::System::UInt64 data; // 0x10

		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray64 op_OnesComplement(::UnityEngine::Rendering::BitArray64 a1)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray64 op_BitwiseOr(::UnityEngine::Rendering::BitArray64 a1, ::UnityEngine::Rendering::BitArray64 a2)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray64 op_BitwiseAnd(::UnityEngine::Rendering::BitArray64 a1, ::UnityEngine::Rendering::BitArray64 a2)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray64 a1, ::UnityEngine::Rendering::BitArray64 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray64 a1, ::UnityEngine::Rendering::BitArray64 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET))(this);
		}
	};
}
