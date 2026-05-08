#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_GLOBALOBJECTHASHTABLES_FINDOBJECTBYTYPEID_OFFSET UNITYSDK_OFFSET(0x1ADA2B20)
#define UNREALTYPES_GLOBALOBJECTHASHTABLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA2C50)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalObjectHashTables_TypeDefinitionIndex = 25266;

	class GlobalObjectHashTables : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>** StaticGet_FullName2ObjectHandle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(GlobalObjectHashTables_TypeDefinitionIndex)->GetStaticField(0x1EB90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>** StaticGet_TypeId2ObjectHandle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(GlobalObjectHashTables_TypeDefinitionIndex)->GetStaticField(0x1EB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTHASHTABLES__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> FindObjectByTypeId(::System::UInt32 typeId)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTHASHTABLES_FINDOBJECTBYTYPEID_OFFSET))(typeId);
		}
	};
}
