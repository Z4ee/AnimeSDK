#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text::RegularExpressions { class Capture; }
namespace System::Text::RegularExpressions { class CaptureCollection; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1E9EF3A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E9EF390)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E9EF350)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E9EF420)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EF300)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int CaptureEnumerator_TypeDefinitionIndex = 2505;

	class CaptureEnumerator : public ::System::Object
	{
	public:
		::System::Text::RegularExpressions::CaptureCollection* _rcc; // 0x10
		::System::Int32 _curindex; // 0x18

		::System::Void _ctor(::System::Text::RegularExpressions::CaptureCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::CaptureCollection*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Capture* get_Capture()
		{
			return ((::System::Text::RegularExpressions::Capture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_GET_CAPTURE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTUREENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
