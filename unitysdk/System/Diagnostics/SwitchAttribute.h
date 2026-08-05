#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }

#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALLRECURSIVE_1_OFFSET UNITYSDK_OFFSET(0x1E9767E0)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALLRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1E976650)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALL_OFFSET UNITYSDK_OFFSET(0x1E976480)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E976460)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1E976440)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHTYPE_OFFSET UNITYSDK_OFFSET(0x1E976450)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E976470)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1E9762E0)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHTYPE_OFFSET UNITYSDK_OFFSET(0x1E9763D0)
#define SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E976270)

namespace System::Diagnostics
{
	inline static constexpr unsigned int SwitchAttribute_TypeDefinitionIndex = 2761;

	class SwitchAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10
		::System::String* description; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* switchName, ::System::Type* switchType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE__CTOR_OFFSET))(this, switchName, switchType);
		}

		::System::String* get_SwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHNAME_OFFSET))(this);
		}

		::System::Void set_SwitchName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHNAME_OFFSET))(this, value);
		}

		::System::Type* get_SwitchType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHTYPE_OFFSET))(this);
		}

		::System::Void set_SwitchType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHTYPE_OFFSET))(this, value);
		}

		::System::String* get_SwitchDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GET_SWITCHDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_SwitchDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_SET_SWITCHDESCRIPTION_OFFSET))(this, value);
		}

		static ::Il2CppArray<::System::Diagnostics::SwitchAttribute*>* GetAll(::System::Reflection::Assembly* assembly)
		{
			return ((::Il2CppArray<::System::Diagnostics::SwitchAttribute*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALL_OFFSET))(assembly);
		}

		static ::System::Void GetAllRecursive(::System::Type* type, ::System::Collections::ArrayList* switchAttribs)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALLRECURSIVE_OFFSET))(type, switchAttribs);
		}

		static ::System::Void GetAllRecursive_1(::System::Reflection::MemberInfo* member, ::System::Collections::ArrayList* switchAttribs)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCHATTRIBUTE_GETALLRECURSIVE_1_OFFSET))(member, switchAttribs);
		}
	};
}
