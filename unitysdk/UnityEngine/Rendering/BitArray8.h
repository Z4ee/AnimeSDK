#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET UNITYSDK_OFFSET(0x3878EE0)
#define UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET UNITYSDK_OFFSET(0x3879060)
#define UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET UNITYSDK_OFFSET(0x3878FA0)
#define UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET UNITYSDK_OFFSET(0x38790B0)
#define UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3879110)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x38252E0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3878E20)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x148740)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3878E30)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3878E40)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1B1626F0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1B1626E0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1628D0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B1628E0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B1626D0)
#define UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3878E50)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3878E70)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray8_TypeDefinitionIndex = 33782;

	struct alignas(1) BitArray8
	{
		::System::Byte data; // 0x10

		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray8 op_OnesComplement(::UnityEngine::Rendering::BitArray8 a1)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray8 op_BitwiseOr(::UnityEngine::Rendering::BitArray8 a1, ::UnityEngine::Rendering::BitArray8 a2)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray8 op_BitwiseAnd(::UnityEngine::Rendering::BitArray8 a1, ::UnityEngine::Rendering::BitArray8 a2)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray8 a1, ::UnityEngine::Rendering::BitArray8 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray8 a1, ::UnityEngine::Rendering::BitArray8 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET))(this);
		}
	};
}
