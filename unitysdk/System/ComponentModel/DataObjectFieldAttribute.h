#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6F6C20)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6F6CA0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x1C6F6BE0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x1C6F6BF0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C6F6C00)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x1C6F6C10)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F6BA0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6F6BC0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C6F6B80)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F6B60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectFieldAttribute_TypeDefinitionIndex = 2851;

	class DataObjectFieldAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _length; // 0x10
		::System::Boolean _isNullable; // 0x14
		::System::Boolean _isIdentity; // 0x15
		::System::Boolean _primaryKey; // 0x16

		::System::Void _ctor(::System::Boolean primaryKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_OFFSET))(this, primaryKey);
		}

		::System::Void _ctor_1(::System::Boolean primaryKey, ::System::Boolean isIdentity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_1_OFFSET))(this, primaryKey, isIdentity);
		}

		::System::Void _ctor_2(::System::Boolean primaryKey, ::System::Boolean isIdentity, ::System::Boolean isNullable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_2_OFFSET))(this, primaryKey, isIdentity, isNullable);
		}

		::System::Void _ctor_3(::System::Boolean primaryKey, ::System::Boolean isIdentity, ::System::Boolean isNullable, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE__CTOR_3_OFFSET))(this, primaryKey, isIdentity, isNullable, length);
		}

		::System::Boolean get_IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISIDENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsNullable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISNULLABLE_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_PrimaryKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_PRIMARYKEY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
