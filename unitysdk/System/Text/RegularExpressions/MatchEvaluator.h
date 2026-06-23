#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D5DC710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D5DC740)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D5DC1D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DC1B0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int MatchEvaluator_TypeDefinitionIndex = 2718;

	class MatchEvaluator : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::Text::RegularExpressions::Match* match)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_INVOKE_OFFSET))(this, match);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::RegularExpressions::Match* match, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::RegularExpressions::Match*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_BEGININVOKE_OFFSET))(this, match, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHEVALUATOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
