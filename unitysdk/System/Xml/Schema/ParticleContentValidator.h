#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/ContentValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"

namespace System { class Object; }
namespace System::Collections { class Stack; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class NamespaceList; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }
namespace System::Xml::Schema { class SyntaxTreeNode; }

#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDCHOICE_OFFSET UNITYSDK_OFFSET(0x1856BB60)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFNODE_OFFSET UNITYSDK_OFFSET(0x1858FFC0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x185900B0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1856B8C0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDPLUS_OFFSET UNITYSDK_OFFSET(0x1856BE00)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDQMARK_OFFSET UNITYSDK_OFFSET(0x1856BDC0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1856BA90)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSTAR_OFFSET UNITYSDK_OFFSET(0x1856BD80)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_BUILDTRANSITIONTABLE_OFFSET UNITYSDK_OFFSET(0x185910D0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CALCULATETOTALFOLLOWPOSFORRANGENODES_OFFSET UNITYSDK_OFFSET(0x185902E0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKCMUPAWITHLEAFRANGENODES_OFFSET UNITYSDK_OFFSET(0x18590C50)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_1_OFFSET UNITYSDK_OFFSET(0x18591A80)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET UNITYSDK_OFFSET(0x18591020)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSEGROUP_OFFSET UNITYSDK_OFFSET(0x1856BC30)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSURE_OFFSET UNITYSDK_OFFSET(0x18590130)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1856BE40)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_FINISH_OFFSET UNITYSDK_OFFSET(0x1856AE80)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_GETAPPLICABLEMINMAXFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0x18590900)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_OPENGROUP_OFFSET UNITYSDK_OFFSET(0x1856AAE0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_START_OFFSET UNITYSDK_OFFSET(0x1856A980)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1858FF00)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1856A920)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ParticleContentValidator_TypeDefinitionIndex = 2068;

	class ParticleContentValidator : public ::System::Xml::Schema::ContentValidator
	{
	public:
		::System::Xml::Schema::Positions* positions; // 0x18
		::System::Collections::Stack* stack; // 0x20
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x28
		::System::Xml::Schema::SyntaxTreeNode* contentNode; // 0x30
		::System::Boolean enableUpaCheck; // 0x38
		::System::Boolean isPartial; // 0x39
		::System::Int32 minMaxNodesCount; // 0x3C

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR__CTOR_OFFSET))(this, contentType);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaContentType contentType, ::System::Boolean enableUpaCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR__CTOR_1_OFFSET))(this, contentType, enableUpaCheck);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_START_OFFSET))(this);
		}

		::System::Void OpenGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_OPENGROUP_OFFSET))(this);
		}

		::System::Void CloseGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSEGROUP_OFFSET))(this);
		}

		::System::Boolean Exists(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_EXISTS_OFFSET))(this, name);
		}

		::System::Void AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAME_OFFSET))(this, name, particle);
		}

		::System::Void AddNamespaceList(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::NamespaceList*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAMESPACELIST_OFFSET))(this, namespaceList, particle);
		}

		::System::Void AddLeafNode(::System::Xml::Schema::SyntaxTreeNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SyntaxTreeNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFNODE_OFFSET))(this, node);
		}

		::System::Void AddChoice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDCHOICE_OFFSET))(this);
		}

		::System::Void AddSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSEQUENCE_OFFSET))(this);
		}

		::System::Void AddStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSTAR_OFFSET))(this);
		}

		::System::Void AddPlus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDPLUS_OFFSET))(this);
		}

		::System::Void AddQMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDQMARK_OFFSET))(this);
		}

		::System::Void Closure(::System::Xml::Schema::InteriorNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::InteriorNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSURE_OFFSET))(this, node);
		}

		::System::Xml::Schema::ContentValidator* Finish(::System::Boolean useDFA)
		{
			return ((::System::Xml::Schema::ContentValidator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_FINISH_OFFSET))(this, useDFA);
		}

		::Il2CppArray<::System::Xml::Schema::BitSet*>* CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet* firstpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos, ::System::Xml::Schema::BitSet*& posWithRangeTerminals)
		{
			return ((::Il2CppArray<::System::Xml::Schema::BitSet*>*(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*, ::System::Xml::Schema::BitSet*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CALCULATETOTALFOLLOWPOSFORRANGENODES_OFFSET))(this, firstpos, followpos, posWithRangeTerminals);
		}

		::System::Void CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet* curpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKCMUPAWITHLEAFRANGENODES_OFFSET))(this, curpos);
		}

		::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet* curpos, ::System::Xml::Schema::BitSet* posWithRangeTerminals, ::Il2CppArray<::System::Xml::Schema::BitSet*>* minmaxFollowPos)
		{
			return ((::System::Xml::Schema::BitSet*(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_GETAPPLICABLEMINMAXFOLLOWPOS_OFFSET))(this, curpos, posWithRangeTerminals, minmaxFollowPos);
		}

		::System::Void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* firstpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET))(this, firstpos, followpos);
		}

		::System::Void CheckUniqueParticleAttribution_1(::System::Xml::Schema::BitSet* curpos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BitSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_1_OFFSET))(this, curpos);
		}

		::Il2CppArray<::Il2CppArray<::System::Int32>*>* BuildTransitionTable(::System::Xml::Schema::BitSet* firstpos, ::Il2CppArray<::System::Xml::Schema::BitSet*>* followpos, ::System::Int32 endMarkerPos)
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Int32>*>*(*)(::PVOID, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Xml::Schema::BitSet*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_BUILDTRANSITIONTABLE_OFFSET))(this, firstpos, followpos, endMarkerPos);
		}
	};
}
