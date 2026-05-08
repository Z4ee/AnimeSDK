#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/FGuid.h"
#include "unitysdk/UnrealTypes/FPropertyBagPropertyDesc.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/ScriptStruct.h"

namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYID_OFFSET UNITYSDK_OFFSET(0x1ADA57C0)
#define UNREALTYPES_PROPERTYBAG_GETORCREATEFROMDESCS_OFFSET UNITYSDK_OFFSET(0x1ADA3740)
#define UNREALTYPES_PROPERTYBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA4720)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBag_TypeDefinitionIndex = 25320;

	class PropertyBag : public ::UnrealTypes::ScriptStruct
	{
	public:
		::UnrealTypes::ManagedStructList_1<::UnrealTypes::FPropertyBagPropertyDesc>* PropertyDescs; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG__CTOR_OFFSET))(this);
		}

		static ::UnrealTypes::PropertyBag* GetOrCreateFromDescs(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>& propertyDescs)
		{
			return ((::UnrealTypes::PropertyBag*(*)(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_GETORCREATEFROMDESCS_OFFSET))(propertyDescs);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc> FindPropertyDescByID(::UnrealTypes::FGuid& id)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc>(*)(::PVOID, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYID_OFFSET))(this, id);
		}
	};
}
