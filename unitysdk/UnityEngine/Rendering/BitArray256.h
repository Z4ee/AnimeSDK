#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET UNITYSDK_OFFSET(0x3BB4510)
#define UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET UNITYSDK_OFFSET(0x3BB4530)
#define UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET UNITYSDK_OFFSET(0x3BB4520)
#define UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB4590)
#define UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB45A0)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x3BB42F0)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3BB4320)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3BB42E0)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3BB4350)
#define UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BB4360)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1CD01FD0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1CD01FA0)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD02200)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CD02230)
#define UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1CD01F70)
#define UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3BB43B0)
#define UNITYENGINE_RENDERING_BITARRAY256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BB4440)
#define UNITYENGINE_RENDERING_BITARRAY256__CTOR_OFFSET UNITYSDK_OFFSET(0x37AC3F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray256_TypeDefinitionIndex = 34925;

	struct alignas(8) BitArray256
	{
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18
		::System::UInt64 data3; // 0x20
		::System::UInt64 data4; // 0x28

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256__CTOR_1_OFFSET))(this, a1);
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

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray256 op_OnesComplement(::UnityEngine::Rendering::BitArray256 a1)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray256 op_BitwiseOr(::UnityEngine::Rendering::BitArray256 a1, ::UnityEngine::Rendering::BitArray256 a2)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray256 op_BitwiseAnd(::UnityEngine::Rendering::BitArray256 a1, ::UnityEngine::Rendering::BitArray256 a2)
		{
			return ((::UnityEngine::Rendering::BitArray256(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_BITNOT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray256 a1, ::UnityEngine::Rendering::BitArray256 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray256 a1, ::UnityEngine::Rendering::BitArray256 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray256, ::UnityEngine::Rendering::BitArray256))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY256_GETHASHCODE_OFFSET))(this);
		}
	};
}
