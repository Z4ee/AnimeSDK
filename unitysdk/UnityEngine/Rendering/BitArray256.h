#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET UNITYSDK_OFFSET(0x8690B0)
#define UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET UNITYSDK_OFFSET(0x8690D0)
#define UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET UNITYSDK_OFFSET(0x8690C0)
#define UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET UNITYSDK_OFFSET(0x8690E0)
#define UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8690F0)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x868E70)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x868F20)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x7A4200)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x868FD0)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x868FE0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x191E1AE0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x191E1A30)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x191E2080)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x191E2120)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x191E19A0)
#define UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x868FF0)
#define UNITYENGINE_RENDERING_BITARRAY256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A43A0)
#define UNITYENGINE_RENDERING_BITARRAY256__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8500)
#define UNITYENGINE_RENDERING_BITARRAY256___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8691D0)
#define UNITYENGINE_RENDERING_BITARRAY256___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x869240)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray256_TypeDefinitionIndex = 9591;

	struct alignas(8) BitArray256
	{
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18
		::System::UInt64 data3; // 0x20
		::System::UInt64 data4; // 0x28

		::System::Void _ctor(::System::UInt64 initValue1, ::System::UInt64 initValue2, ::System::UInt64 initValue3, ::System::UInt64 initValue4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256__CTOR_OFFSET))(this, initValue1, initValue2, initValue3, initValue4);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::UnityEngine::Rendering::BitArray256 op_OnesComplement(::UnityEngine::Rendering::BitArray256 a)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::UnityEngine::Rendering::BitArray256 op_BitwiseOr(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::UnityEngine::Rendering::BitArray256 op_BitwiseAnd(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET))(a, b);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
