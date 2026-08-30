#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET UNITYSDK_OFFSET(0x3BB4760)
#define UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET UNITYSDK_OFFSET(0x3BB48E0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET UNITYSDK_OFFSET(0x3BB4820)
#define UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB4930)
#define UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB4990)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x39AA030)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3BB4610)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3BB4600)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3BB46C0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET UNITYSDK_OFFSET(0x3BB4620)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xD32880)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1CD027C0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1CD02890)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD02900)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD02910)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1CD028F0)
#define UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BB46D0)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB46F0)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray32_TypeDefinitionIndex = 34922;

	struct alignas(4) BitArray32
	{
		::System::UInt32 data; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET))(this, a1);
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

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::BitArray32 op_OnesComplement(::UnityEngine::Rendering::BitArray32 a1)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseOr(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseAnd(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET))(this);
		}
	};
}
