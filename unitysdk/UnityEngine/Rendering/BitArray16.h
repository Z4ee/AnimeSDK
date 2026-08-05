#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET UNITYSDK_OFFSET(0x9680E0)
#define UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET UNITYSDK_OFFSET(0x968100)
#define UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET UNITYSDK_OFFSET(0x9680F0)
#define UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET UNITYSDK_OFFSET(0x968110)
#define UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9681F0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x809460)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x967FA0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x967F90)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x967FB0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x967FC0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1CA63330)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1CA632E0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CA636B0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CA63700)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1CA632A0)
#define UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x968060)
#define UNITYENGINE_RENDERING_BITARRAY16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x968070)
#define UNITYENGINE_RENDERING_BITARRAY16__CTOR_OFFSET UNITYSDK_OFFSET(0x3F82D0)
#define UNITYENGINE_RENDERING_BITARRAY16___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x968290)
#define UNITYENGINE_RENDERING_BITARRAY16___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9682F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray16_TypeDefinitionIndex = 18723;

	struct alignas(2) BitArray16
	{
		::System::UInt16 data; // 0x10

		::System::Void _ctor(::System::UInt16 initValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16__CTOR_OFFSET))(this, initValue);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::UnityEngine::Rendering::BitArray16 op_OnesComplement(::UnityEngine::Rendering::BitArray16 a)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::UnityEngine::Rendering::BitArray16 op_BitwiseOr(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::UnityEngine::Rendering::BitArray16 op_BitwiseAnd(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET))(a, b);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
