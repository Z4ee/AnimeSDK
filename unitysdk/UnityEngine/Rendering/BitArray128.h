#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET UNITYSDK_OFFSET(0x3BB3ED0)
#define UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET UNITYSDK_OFFSET(0x3BB3EF0)
#define UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET UNITYSDK_OFFSET(0x3BB3EE0)
#define UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB3F40)
#define UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB3FA0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x3BB3D90)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3BB3DB0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3BB3D80)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3BB3DD0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BB3DE0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1CD00D90)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1CD00D70)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD00F80)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD00FA0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1CD00D50)
#define UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BB3E00)
#define UNITYENGINE_RENDERING_BITARRAY128__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB3E40)
#define UNITYENGINE_RENDERING_BITARRAY128__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray128_TypeDefinitionIndex = 34924;

	struct alignas(8) BitArray128
	{
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray128 op_OnesComplement(::UnityEngine::Rendering::BitArray128 a1)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray128 op_BitwiseOr(::UnityEngine::Rendering::BitArray128 a1, ::UnityEngine::Rendering::BitArray128 a2)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray128 op_BitwiseAnd(::UnityEngine::Rendering::BitArray128 a1, ::UnityEngine::Rendering::BitArray128 a2)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray128 a1, ::UnityEngine::Rendering::BitArray128 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray128 a1, ::UnityEngine::Rendering::BitArray128 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET))(this);
		}
	};
}
