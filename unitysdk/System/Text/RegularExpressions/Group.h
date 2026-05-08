#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Capture.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class CaptureCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET UNITYSDK_OFFSET(0x19E45FE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19E45FD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x19E45FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19E46040)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E46110)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E461A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E45F30)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 2736;

	class Group : public ::System::Text::RegularExpressions::Capture
	{
	public:
		static ::System::Text::RegularExpressions::Group** StaticGet__emptygroup()
		{
			return (::System::Text::RegularExpressions::Group**)Il2CppClass::FromTypeDefinitionIndex(Group_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		::System::String* _name; // 0x20
		::System::Text::RegularExpressions::CaptureCollection* _capcoll; // 0x28
		::Il2CppArray<::System::Int32>* _caps; // 0x30
		::System::Int32 _capcount; // 0x38

		::System::Void _ctor(::System::String* text, ::Il2CppArray<::System::Int32>* caps, ::System::Int32 capcount, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET))(this, text, caps, capcount, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_Success()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_NAME_OFFSET))(this);
		}

		::System::Text::RegularExpressions::CaptureCollection* get_Captures()
		{
			return ((::System::Text::RegularExpressions::CaptureCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::Group* Synchronized(::System::Text::RegularExpressions::Group* inner)
		{
			return ((::System::Text::RegularExpressions::Group*(*)(::System::Text::RegularExpressions::Group*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_SYNCHRONIZED_OFFSET))(inner);
		}
	};
}
