#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FPropertyBagPropertyDesc.h"
#include "unitysdk/UnrealTypes/FStructView.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_FINDPROPERTYDESCBYNAME_OFFSET UNITYSDK_OFFSET(0x1E3868C0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_GETMUTABLEVALUEADDRESS_OFFSET UNITYSDK_OFFSET(0x1E386B30)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_GETVALUEADDRESS_OFFSET UNITYSDK_OFFSET(0x1E388A00)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1E388B30)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEBYTE_OFFSET UNITYSDK_OFFSET(0x1E388EC0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E389830)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEENUM_OFFSET UNITYSDK_OFFSET(0x1E389A10)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1E389430)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEINT32_OFFSET UNITYSDK_OFFSET(0x1E388F30)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEINT64_OFFSET UNITYSDK_OFFSET(0x1E389370)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUENAME_OFFSET UNITYSDK_OFFSET(0x1E3898A0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E389E60)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUESTRUCT_OFFSET UNITYSDK_OFFSET(0x1E389BE0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEUINT32_OFFSET UNITYSDK_OFFSET(0x1E388FA0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEUINT64_OFFSET UNITYSDK_OFFSET(0x1E3893D0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedPropertyBagPureMethodExtensions_TypeDefinitionIndex = 28410;

	class FInstancedPropertyBagPureMethodExtensions : public ::System::Object
	{
	public:
		static ::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc> FindPropertyDescByName(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc>(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_FINDPROPERTYDESCBYNAME_OFFSET))(self, name);
		}

		static ::System::Void* GetValueAddress(::UnrealTypes::FInstancedPropertyBag& self, ::UnrealTypes::FPropertyBagPropertyDesc& desc)
		{
			return ((::System::Void*(*)(::UnrealTypes::FInstancedPropertyBag&, ::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_GETVALUEADDRESS_OFFSET))(self, desc);
		}

		static ::System::Void* GetMutableValueAddress(::UnrealTypes::FInstancedPropertyBag& self, ::UnrealTypes::FPropertyBagPropertyDesc& desc)
		{
			return ((::System::Void*(*)(::UnrealTypes::FInstancedPropertyBag&, ::UnrealTypes::FPropertyBagPropertyDesc&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_GETMUTABLEVALUEADDRESS_OFFSET))(self, desc);
		}

		static ::System::Boolean TryGetValueBool(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Boolean& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEBOOL_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueByte(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Byte& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Byte&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEBYTE_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueInt32(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Int32& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Int32&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEINT32_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueUInt32(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::UInt32& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEUINT32_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueInt64(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Int64& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Int64&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEINT64_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueUInt64(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::UInt64& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::UInt64&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEUINT64_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueFloat(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Single& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Single&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEFLOAT_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueDouble(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::Double& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::Double&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEDOUBLE_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueName(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::Foundation::Unreal::FName& ret)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::Foundation::Unreal::FName&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUENAME_OFFSET))(self, name, ret);
		}

		static ::System::Boolean TryGetValueEnum(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::System::UInt64& ret, ::UnrealTypes::Enum* requestedEnum)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::System::UInt64&, ::UnrealTypes::Enum*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEENUM_OFFSET))(self, name, ret, requestedEnum);
		}

		static ::System::Boolean TryGetValueStruct(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::UnrealTypes::FStructView& ret, ::UnrealTypes::ScriptStruct* requestedStruct)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::UnrealTypes::FStructView&, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUESTRUCT_OFFSET))(self, name, ret, requestedStruct);
		}

		static ::System::Boolean TryGetValueObject(::UnrealTypes::FInstancedPropertyBag& self, ::Foundation::Unreal::FName name, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>& ret, ::UnrealTypes::Class* requestedStruct)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedPropertyBag&, ::Foundation::Unreal::FName, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>&, ::UnrealTypes::Class*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAGPUREMETHODEXTENSIONS_TRYGETVALUEOBJECT_OFFSET))(self, name, ret, requestedStruct);
		}
	};
}
