#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/Capture.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class CaptureCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET UNITYSDK_OFFSET(0x167CB790)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x167CB780)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x167CB7F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x167CB870)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x167CB700)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Group_TypeDefinitionIndex = 2507;

	class Group : public ::System::Text::RegularExpressions::Capture
	{
	public:
		static ::System::Text::RegularExpressions::Group** StaticGet__emptygroup()
		{
			return (::System::Text::RegularExpressions::Group**)Il2CppClass::FromTypeDefinitionIndex(Group_TypeDefinitionIndex)->GetStaticField(0x2F360);
		}
		::System::Text::RegularExpressions::CaptureCollection* _capcoll; // 0x20
		::Il2CppArray<::System::Int32>* _caps; // 0x28
		::System::String* _name; // 0x30
		::System::Int32 _capcount; // 0x38

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Text::RegularExpressions::CaptureCollection* get_Captures()
		{
			return ((::System::Text::RegularExpressions::CaptureCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_GROUP_GET_CAPTURES_OFFSET))(this);
		}
	};
}
