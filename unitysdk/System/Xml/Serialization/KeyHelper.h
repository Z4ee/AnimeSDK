#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_1_OFFSET UNITYSDK_OFFSET(0x1BCFFB00)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_2_OFFSET UNITYSDK_OFFSET(0x1BCFFBB0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_3_OFFSET UNITYSDK_OFFSET(0x1BCFFC00)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_4_OFFSET UNITYSDK_OFFSET(0x1BCFFC50)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_5_OFFSET UNITYSDK_OFFSET(0x1BCFFCD0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x1BCFFAF0)
#define SYSTEM_XML_SERIALIZATION_KEYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCFFD50)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int KeyHelper_TypeDefinitionIndex = 1863;

	class KeyHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void AddField(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::String* val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_OFFSET))(sb, n, val);
		}

		static ::System::Void AddField_1(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::String* val, ::System::String* def)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_1_OFFSET))(sb, n, val, def);
		}

		static ::System::Void AddField_2(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Boolean val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_2_OFFSET))(sb, n, val);
		}

		static ::System::Void AddField_3(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Boolean val, ::System::Boolean def)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_3_OFFSET))(sb, n, val, def);
		}

		static ::System::Void AddField_4(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Int32 val, ::System::Int32 def)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_4_OFFSET))(sb, n, val, def);
		}

		static ::System::Void AddField_5(::System::Text::StringBuilder* sb, ::System::Int32 n, ::System::Type* val)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_KEYHELPER_ADDFIELD_5_OFFSET))(sb, n, val);
		}
	};
}
