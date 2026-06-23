#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET UNITYSDK_OFFSET(0x910FB0)
#define UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET UNITYSDK_OFFSET(0x910FD0)
#define UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET UNITYSDK_OFFSET(0x910FC0)
#define UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET UNITYSDK_OFFSET(0x910FE0)
#define UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9110C0)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x427580)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x910E70)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x910E60)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x910E80)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x910E90)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1B49B500)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1B49B4B0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B49B880)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B49B8D0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B49B460)
#define UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x910F30)
#define UNITYENGINE_RENDERING_BITARRAY64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x910F40)
#define UNITYENGINE_RENDERING_BITARRAY64__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define UNITYENGINE_RENDERING_BITARRAY64___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x911160)
#define UNITYENGINE_RENDERING_BITARRAY64___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9111C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray64_TypeDefinitionIndex = 18319;

	struct alignas(8) BitArray64
	{
		::System::UInt64 data; // 0x10

		::System::Void _ctor(::System::UInt64 initValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64__CTOR_OFFSET))(this, initValue);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64__CTOR_1_OFFSET))(this, bitIndexTrue);
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

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::UnityEngine::Rendering::BitArray64 op_OnesComplement(::UnityEngine::Rendering::BitArray64 a)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET))(a);
		}

		static ::UnityEngine::Rendering::BitArray64 op_BitwiseOr(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET))(a, b);
		}

		static ::UnityEngine::Rendering::BitArray64 op_BitwiseAnd(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b)
		{
			return ((::UnityEngine::Rendering::BitArray64(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET))(a, b);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray64 a, ::UnityEngine::Rendering::BitArray64 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray64, ::UnityEngine::Rendering::BitArray64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
