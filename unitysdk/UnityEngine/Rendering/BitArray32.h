#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET UNITYSDK_OFFSET(0x8694B0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET UNITYSDK_OFFSET(0x8694D0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET UNITYSDK_OFFSET(0x8694C0)
#define UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET UNITYSDK_OFFSET(0x8694E0)
#define UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8695C0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x687BF0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x8692C0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x8692B0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x869380)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET UNITYSDK_OFFSET(0x8692D0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x869390)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x191E2B60)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x191E2CF0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x191E2E30)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x191E2E80)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x191E2DF0)
#define UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x869430)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x869440)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET UNITYSDK_OFFSET(0x2E85F0)
#define UNITYENGINE_RENDERING_BITARRAY32___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x869650)
#define UNITYENGINE_RENDERING_BITARRAY32___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8696B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray32_TypeDefinitionIndex = 9588;

	struct alignas(4) BitArray32
	{
		::System::UInt32 data; // 0x10

		::System::Void _ctor(::System::UInt32 initValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET))(this, initValue);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET))(this, index, value);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::BitArray32 op_OnesComplement(::UnityEngine::Rendering::BitArray32 a)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseOr(::UnityEngine::Rendering::BitArray32 a, ::UnityEngine::Rendering::BitArray32 b)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseAnd(::UnityEngine::Rendering::BitArray32 a, ::UnityEngine::Rendering::BitArray32 b)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET))(a, b);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray32 a, ::UnityEngine::Rendering::BitArray32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray32 a, ::UnityEngine::Rendering::BitArray32 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
