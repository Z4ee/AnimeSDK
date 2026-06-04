#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET UNITYSDK_OFFSET(0x3878210)
#define UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET UNITYSDK_OFFSET(0x3878390)
#define UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET UNITYSDK_OFFSET(0x38782D0)
#define UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET UNITYSDK_OFFSET(0x38783E0)
#define UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3878440)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x3878140)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3878150)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3834EB0)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3878160)
#define UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3878170)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1B1608F0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1B1608E0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B160AD0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B160AE0)
#define UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B1608D0)
#define UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3878180)
#define UNITYENGINE_RENDERING_BITARRAY16__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38781A0)
#define UNITYENGINE_RENDERING_BITARRAY16__CTOR_OFFSET UNITYSDK_OFFSET(0x2C6FBF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray16_TypeDefinitionIndex = 33783;

	struct alignas(2) BitArray16
	{
		::System::UInt16 data; // 0x10

		::System::Void _ctor(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16__CTOR_1_OFFSET))(this, a1);
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

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray16 op_OnesComplement(::UnityEngine::Rendering::BitArray16 a1)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray16 op_BitwiseOr(::UnityEngine::Rendering::BitArray16 a1, ::UnityEngine::Rendering::BitArray16 a2)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray16 op_BitwiseAnd(::UnityEngine::Rendering::BitArray16 a1, ::UnityEngine::Rendering::BitArray16 a2)
		{
			return ((::UnityEngine::Rendering::BitArray16(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray16 a1, ::UnityEngine::Rendering::BitArray16 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray16 a1, ::UnityEngine::Rendering::BitArray16 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray16, ::UnityEngine::Rendering::BitArray16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY16_GETHASHCODE_OFFSET))(this);
		}
	};
}
