#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class EventHandler_1; }
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeAnnotation_TypeDefinitionIndex = 3878;

	class XObjectChangeAnnotation : public ::System::Object
	{
	public:
		::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changed; // 0x10
		::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* changing; // 0x18
	};
}
