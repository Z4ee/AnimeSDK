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

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Property; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCARRAYHASH_OFFSET UNITYSDK_OFFSET(0x1E3911C0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CALCPROPERTYDESCHASH_OFFSET UNITYSDK_OFFSET(0x1E3955F0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CANCASTTO_OFFSET UNITYSDK_OFFSET(0x1E38EB30)
#define UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_1_OFFSET UNITYSDK_OFFSET(0x1E386640)
#define UNREALTYPES_STRUCTUTILSPRIVATE_COPYMATCHINGVALUESBYID_OFFSET UNITYSDK_OFFSET(0x1E395BE0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_CREATEPROPERTYFROMDESC_OFFSET UNITYSDK_OFFSET(0x1E3914B0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETOBJECTHASH_OFFSET UNITYSDK_OFFSET(0x1E3953F0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E3894A0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASENUM_OFFSET UNITYSDK_OFFSET(0x1E389A80)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASINT64_OFFSET UNITYSDK_OFFSET(0x1E388BA0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASNAME_OFFSET UNITYSDK_OFFSET(0x1E389900)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASOBJECT_OFFSET UNITYSDK_OFFSET(0x1E389F10)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E389C90)
#define UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASUINT64_OFFSET UNITYSDK_OFFSET(0x1E389010)
#define UNREALTYPES_STRUCTUTILSPRIVATE_REMOVEPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1E3913D0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E3873F0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMENUM_OFFSET UNITYSDK_OFFSET(0x1E387A10)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMINT64_OFFSET UNITYSDK_OFFSET(0x1E386B40)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMNAME_OFFSET UNITYSDK_OFFSET(0x1E3878B0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1E387D90)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E387BA0)
#define UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMUINT64_OFFSET UNITYSDK_OFFSET(0x1E386ED0)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructUtilsPrivate_TypeDefinitionIndex = 28416;

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

		static ::UnrealTypes::PropertyBagResult GetPropertyAsName(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::Foundation::Unreal::FName& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::Foundation::Unreal::FName&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASNAME_OFFSET))(desc, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsEnum(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::UnrealTypes::Enum* requestedEnum, ::System::Void* address, ::System::UInt64& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::UnrealTypes::Enum*, ::System::Void*, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASENUM_OFFSET))(desc, requestedEnum, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsStruct(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::UnrealTypes::ScriptStruct* requestedStruct, ::System::Void* address, ::UnrealTypes::FStructView& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::UnrealTypes::ScriptStruct*, ::System::Void*, ::UnrealTypes::FStructView&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASSTRUCT_OFFSET))(desc, requestedStruct, address, outValue);
		}

		static ::UnrealTypes::PropertyBagResult GetPropertyAsObject(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::UnrealTypes::Class* requestedClass, ::System::Void* address, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>& outValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::UnrealTypes::Class*, ::System::Void*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_GETPROPERTYASOBJECT_OFFSET))(desc, requestedClass, address, outValue);
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

		static ::UnrealTypes::PropertyBagResult SetPropertyFromName(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::Foundation::Unreal::FName inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMNAME_OFFSET))(desc, address, inValue);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromEnum(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::System::UInt64 inValue, ::UnrealTypes::Enum* enum_)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::System::UInt64, ::UnrealTypes::Enum*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMENUM_OFFSET))(desc, address, inValue, enum_);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromStruct(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::UnrealTypes::FReadOnlyStructView inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::UnrealTypes::FReadOnlyStructView))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMSTRUCT_OFFSET))(desc, address, inValue);
		}

		static ::UnrealTypes::PropertyBagResult SetPropertyFromObject(::UnrealTypes::FPropertyBagPropertyDesc& desc, ::System::Void* address, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> inValue)
		{
			return ((::UnrealTypes::PropertyBagResult(*)(::UnrealTypes::FPropertyBagPropertyDesc&, ::System::Void*, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTUTILSPRIVATE_SETPROPERTYFROMOBJECT_OFFSET))(desc, address, inValue);
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
