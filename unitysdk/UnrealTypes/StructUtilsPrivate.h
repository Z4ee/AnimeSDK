#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FGuid.h"
#include "unitysdk/UnrealTypes/FPropertyBagPropertyDesc.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/PropertyBagResult.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Property; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCARRAYHASH_OFFSET UNITYSDK_OFFSET(0x1ADA4650)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCHASH_OFFSET UNITYSDK_OFFSET(0x1ADA89D0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x1ADA1FB0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_1_OFFSET UNITYSDK_OFFSET(0x1AD9CAF0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_OFFSET UNITYSDK_OFFSET(0x1ADAA650)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CREATEPROPERTYFROMDESC_OFFSET UNITYSDK_OFFSET(0x1ADA4900)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETOBJECTHASH_OFFSET UNITYSDK_OFFSET(0x1ADA87D0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1ADA96D0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASINT64_OFFSET UNITYSDK_OFFSET(0x1ADA8FC0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASUINT64_OFFSET UNITYSDK_OFFSET(0x1ADA9330)
#define UNREALTYPES_STRUCTUTILSPRIVATE_REMOVEPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1ADA4830)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMDOUBLE_OFFSET UNITYSDK_OFFSET(0x1ADAA1F0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMINT64_OFFSET UNITYSDK_OFFSET(0x1ADA9AB0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMUINT64_OFFSET UNITYSDK_OFFSET(0x1ADA9E30)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructUtilsPrivate_TypeDefinitionIndex = 25321;

	class StructUtilsPrivate : public ::System::Object
	{
	public:
		static ::System::Boolean CanCastTo(::UnrealTypes::Struct* from, ::UnrealTypes::Struct* to)
		{
			return ((::System::Boolean(*)(::UnrealTypes::Struct*, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_CANCASTTO_OFFSET))(from, to);
		}

		static ::System::UInt32 GetObjectHash(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> objectHandle)
		{
			return ((::System::UInt32(*)(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETOBJECTHASH_OFFSET))(objectHandle);
		}

		static ::System::UInt64 CalcPropertyDescHash(::UnrealTypes::FPropertyBagPropertyDesc& desc)
		{
			return ((::System::UInt64(*)(::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCHASH_OFFSET))(desc);
		}

		static ::System::UInt64 CalcPropertyDescArrayHash(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>& descs)
		{
			return ((::System::UInt64(*)(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCARRAYHASH_OFFSET))(descs);
		}

		static ::UnrealTypes::Property* CreatePropertyFromDesc(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::UnrealTypes::IFieldVariant* propertyScope)
		{
			return ((::UnrealTypes::Property*(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::UnrealTypes::IFieldVariant*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_CREATEPROPERTYFROMDESC_OFFSET))(desc, propertyScope);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsInt64(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::Int64& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::Int64&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASINT64_OFFSET))(desc, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsUInt64(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::UInt64& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASUINT64_OFFSET))(desc, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsDouble(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::Double& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::Double&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASDOUBLE_OFFSET))(desc, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromInt64(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::Int64 inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::Int64))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMINT64_OFFSET))(desc, address, inValue);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromUInt64(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::UInt64 inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::UInt64))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMUINT64_OFFSET))(desc, address, inValue);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromDouble(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::Double inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::Double))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMDOUBLE_OFFSET))(desc, address, inValue);
		}

		static ::System::Void CopyMatchingValuesByID(::UnrealTypes::FReadOnlyStructView& source, ::UnrealTypes::FStructView& target, ::System::Boolean hasOverrides, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FGuid> overrides)
		{
			return ((::System::Void(*)(::UnrealTypes::FReadOnlyStructView&, ::UnrealTypes::FStructView&, ::System::Boolean, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FGuid>))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_OFFSET))(source, target, hasOverrides, overrides);
		}

		static ::System::Void CopyMatchingValuesByID_1(::UnrealTypes::FReadOnlyStructView& source, ::UnrealTypes::FStructView& target)
		{
			return ((::System::Void(*)(::UnrealTypes::FReadOnlyStructView&, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_1_OFFSET))(source, target);
		}

		static ::System::Void RemovePropertyByName(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FPropertyBagPropertyDesc>* descs, ::Foundation::Unreal::FName propertyName, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FPropertyBagPropertyDesc>*, ::Foundation::Unreal::FName, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_REMOVEPROPERTYBYNAME_OFFSET))(descs, propertyName, startIndex);
		}
	};
}
