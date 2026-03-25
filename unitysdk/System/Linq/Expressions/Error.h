#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET UNITYSDK_OFFSET(0x18492740)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET UNITYSDK_OFFSET(0x18492690)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET UNITYSDK_OFFSET(0x184925E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET UNITYSDK_OFFSET(0x184974A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET UNITYSDK_OFFSET(0x1847C8E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET UNITYSDK_OFFSET(0x184970F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET UNITYSDK_OFFSET(0x184952C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET UNITYSDK_OFFSET(0x184951D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET UNITYSDK_OFFSET(0x18494A00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET UNITYSDK_OFFSET(0x18494300)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET UNITYSDK_OFFSET(0x184943B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET UNITYSDK_OFFSET(0x18494510)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET UNITYSDK_OFFSET(0x18494460)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET UNITYSDK_OFFSET(0x184946F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET UNITYSDK_OFFSET(0x18494640)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET UNITYSDK_OFFSET(0x184948D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET UNITYSDK_OFFSET(0x18494820)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x18494AB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x18493080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1848F320)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET UNITYSDK_OFFSET(0x18495050)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET UNITYSDK_OFFSET(0x18494F60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x18494B60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x18493EA0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET UNITYSDK_OFFSET(0x18493960)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x18492BC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET UNITYSDK_OFFSET(0x18492900)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET UNITYSDK_OFFSET(0x18494C00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET UNITYSDK_OFFSET(0x18494DD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x18493CC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET UNITYSDK_OFFSET(0x1847F470)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET UNITYSDK_OFFSET(0x1847F7A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x18497620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET UNITYSDK_OFFSET(0x18497580)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET UNITYSDK_OFFSET(0x18497400)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET UNITYSDK_OFFSET(0x18497360)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET UNITYSDK_OFFSET(0x18494260)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x18493690)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x184935A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET UNITYSDK_OFFSET(0x18497EE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET UNITYSDK_OFFSET(0x184822B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET UNITYSDK_OFFSET(0x18498420)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET UNITYSDK_OFFSET(0x18492FD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x18494E70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x18495530)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x18481E10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x18498330)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET UNITYSDK_OFFSET(0x18495620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x18482110)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET UNITYSDK_OFFSET(0x18498140)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET UNITYSDK_OFFSET(0x18481F90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET UNITYSDK_OFFSET(0x18498240)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET UNITYSDK_OFFSET(0x18495440)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET UNITYSDK_OFFSET(0x18495710)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18493A00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET UNITYSDK_OFFSET(0x18493810)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x184958F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x18496F10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET UNITYSDK_OFFSET(0x18492870)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET UNITYSDK_OFFSET(0x18495BC0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x184817F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET UNITYSDK_OFFSET(0x184959E0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18481890)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18495A80)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18495B20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18481930)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET UNITYSDK_OFFSET(0x18494CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET UNITYSDK_OFFSET(0x18492530)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x18496880)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18495800)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x18496790)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET UNITYSDK_OFFSET(0x18480D20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET UNITYSDK_OFFSET(0x184977A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET UNITYSDK_OFFSET(0x184984D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET UNITYSDK_OFFSET(0x18497E30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x184985C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET UNITYSDK_OFFSET(0x18492F20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET UNITYSDK_OFFSET(0x1847DFF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x184931D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET UNITYSDK_OFFSET(0x184971A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET UNITYSDK_OFFSET(0x18497280)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET UNITYSDK_OFFSET(0x18495C60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET UNITYSDK_OFFSET(0x18496D30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET UNITYSDK_OFFSET(0x18495D10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18495E00)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET UNITYSDK_OFFSET(0x18495EF0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET UNITYSDK_OFFSET(0x184960D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET UNITYSDK_OFFSET(0x18495FE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET UNITYSDK_OFFSET(0x18496E20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET UNITYSDK_OFFSET(0x18497000)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET UNITYSDK_OFFSET(0x18493130)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET UNITYSDK_OFFSET(0x18492290)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET UNITYSDK_OFFSET(0x18497A50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET UNITYSDK_OFFSET(0x18497960)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET UNITYSDK_OFFSET(0x18497B40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x18497D90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET UNITYSDK_OFFSET(0x184976C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET UNITYSDK_OFFSET(0x18497CE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x18497C30)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x18492C70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x18492DD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET UNITYSDK_OFFSET(0x18492D20)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18494080)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET UNITYSDK_OFFSET(0x18494170)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET UNITYSDK_OFFSET(0x184965B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET UNITYSDK_OFFSET(0x18492480)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET UNITYSDK_OFFSET(0x184964C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET UNITYSDK_OFFSET(0x18496340)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET UNITYSDK_OFFSET(0x18496250)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET UNITYSDK_OFFSET(0x184966A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x18492E70)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET UNITYSDK_OFFSET(0x18492A60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET UNITYSDK_OFFSET(0x18492B10)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET UNITYSDK_OFFSET(0x18493280)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x18492330)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET UNITYSDK_OFFSET(0x184921F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x18493F90)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET UNITYSDK_OFFSET(0x184978C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET UNITYSDK_OFFSET(0x1847D190)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET UNITYSDK_OFFSET(0x184923D0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET UNITYSDK_OFFSET(0x184929B0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET UNITYSDK_OFFSET(0x184938C0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET UNITYSDK_OFFSET(0x184864A0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18497F60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET UNITYSDK_OFFSET(0x18486620)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET UNITYSDK_OFFSET(0x18498050)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x18486340)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET UNITYSDK_OFFSET(0x184863F0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET UNITYSDK_OFFSET(0x18493DB0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET UNITYSDK_OFFSET(0x18496970)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET UNITYSDK_OFFSET(0x18496A60)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET UNITYSDK_OFFSET(0x18493AE0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET UNITYSDK_OFFSET(0x18493BD0)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET UNITYSDK_OFFSET(0x18496B50)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x18496C40)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET UNITYSDK_OFFSET(0x18493420)
#define SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET UNITYSDK_OFFSET(0x18493330)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 3201;

	class Error : public ::System::Object
	{
	public:
		static ::System::Exception* ReducibleMustOverrideReduce()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCIBLEMUSTOVERRIDEREDUCE_OFFSET))();
		}

		static ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSMATCHINEXPANDOOBJECT_OFFSET))(p0);
		}

		static ::System::Exception* SameKeyExistsInExpando(::System::Object* key)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SAMEKEYEXISTSINEXPANDO_OFFSET))(key);
		}

		static ::System::Exception* KeyDoesNotExistInExpando(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_KEYDOESNOTEXISTINEXPANDO_OFFSET))(p0);
		}

		static ::System::Exception* CollectionModifiedWhileEnumerating()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONMODIFIEDWHILEENUMERATING_OFFSET))();
		}

		static ::System::Exception* CollectionReadOnly()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COLLECTIONREADONLY_OFFSET))();
		}

		static ::System::Exception* MustReduceToDifferent()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREDUCETODIFFERENT_OFFSET))();
		}

		static ::System::Exception* ReducedNotCompatible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REDUCEDNOTCOMPATIBLE_OFFSET))();
		}

		static ::System::Exception* SetterHasNoParams(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERHASNOPARAMS_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyCannotHaveRefType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYCANNOTHAVEREFTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* IndexesOfSetGetMustMatch(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INDEXESOFSETGETMUSTMATCH_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveVarArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEVARARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_OFFSET))(paramName);
		}

		static ::System::Exception* AccessorsCannotHaveByRefArgs_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ACCESSORSCANNOTHAVEBYREFARGS_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* BoundsCannotBeLessThanOne(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOUNDSCANNOTBELESSTHANONE_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBeByRef(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEBYREF_OFFSET))(paramName);
		}

		static ::System::Exception* TypeMustNotBePointer(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEMUSTNOTBEPOINTER_OFFSET))(paramName);
		}

		static ::System::Exception* SetterMustBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_SETTERMUSTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchGetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHGETTER_OFFSET))(paramName);
		}

		static ::System::Exception* PropertyTypeMustMatchSetter(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPEMUSTMATCHSETTER_OFFSET))(paramName);
		}

		static ::System::Exception* BothAccessorsMustBeStatic(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BOTHACCESSORSMUSTBESTATIC_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticFieldsHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICFIELDSHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICPROPERTIESHAVENULLINSTANCE_OFFSET))(paramName);
		}

		static ::System::Exception* OnlyStaticMethodsHaveNullInstance()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ONLYSTATICMETHODSHAVENULLINSTANCE_OFFSET))();
		}

		static ::System::Exception* PropertyTypeCannotBeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYTYPECANNOTBEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidUnboxType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDUNBOXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeWriteable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEWRITEABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustNotHaveValueType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTNOTHAVEVALUETYPE_OFFSET))(paramName);
		}

		static ::System::Exception* MustBeReducible()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTBEREDUCIBLE_OFFSET))();
		}

		static ::System::Exception* LabelMustBeVoidOrHaveExpression(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELMUSTBEVOIDORHAVEEXPRESSION_OFFSET))(paramName);
		}

		static ::System::Exception* QuotedExpressionMustBeLambda(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_QUOTEDEXPRESSIONMUSTBELAMBDA_OFFSET))(paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* VariableMustNotBeByRef_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_VARIABLEMUSTNOTBEBYREF_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* DuplicateVariable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* DuplicateVariable_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_DUPLICATEVARIABLE_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* FaultCannotHaveCatchOrFinally(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FAULTCANNOTHAVECATCHORFINALLY_OFFSET))(paramName);
		}

		static ::System::Exception* TryMustHaveCatchFinallyOrFault()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TRYMUSTHAVECATCHFINALLYORFAULT_OFFSET))();
		}

		static ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BODYOFCATCHMUSTHAVESAMETYPEASBODYOFTRY_OFFSET))();
		}

		static ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXTENSIONNODEMUSTOVERRIDEPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTBESTATIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPERATORMUSTNOTBEVOID_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoercionOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COERCIONOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* UnaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNARYOPERATORNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* BinaryOperatorNotDefined(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_BINARYOPERATORNOTDEFINED_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* ReferenceEqualityNotDefined(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_REFERENCEEQUALITYNOTDEFINED_OFFSET))(p0, p1);
		}

		static ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OPERANDTYPESDONOTMATCHPARAMETERS_OFFSET))(p0, p1);
		}

		static ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_OVERLOADOPERATORTYPEDOESNOTMATCHCONVERSIONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ConversionIsNotSupportedForArithmeticTypes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONVERSIONISNOTSUPPORTEDFORARITHMETICTYPES_OFFSET))();
		}

		static ::System::Exception* ArgumentMustBeArray(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAY_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeBoolean(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEBOOLEAN_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeFieldInfoOrPropertyInfoOrMethod_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEFIELDINFOORPROPERTYINFOORMETHOD_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInstanceMember_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINSTANCEMEMBER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeInteger(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeInteger_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEINTEGER_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* ArgumentMustBeArrayIndexType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBEARRAYINDEXTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMUSTBESINGLEDIMENSIONALARRAYTYPE_OFFSET))(paramName);
		}

		static ::System::Exception* ArgumentTypesMustMatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPESMUSTMATCH_OFFSET))();
		}

		static ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CANNOTAUTOINITIALIZEVALUETYPEMEMBERTHROUGHPROPERTY_OFFSET))(p0);
		}

		static ::System::Exception* IncorrectTypeForTypeAs(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTTYPEFORTYPEAS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* CoalesceUsedOnNonNullType()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_COALESCEUSEDONNONNULLTYPE_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPECANNOTINITIALIZEARRAYTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentTypeDoesNotMatchMember_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTTYPEDOESNOTMATCHMEMBER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ArgumentMemberNotDeclOnType_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTMEMBERNOTDECLONTYPE_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHRETURN_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHASSIGNMENT_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHLABEL_OFFSET))(p0, p1);
		}

		static ::System::Exception* ExpressionTypeNotInvocable(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPENOTINVOCABLE_OFFSET))(p0, paramName);
		}

		static ::System::Exception* InstanceFieldNotDefinedForType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEFIELDNOTDEFINEDFORTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* FieldInfoNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_FIELDINFONOTDEFINEDFORTYPE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* IncorrectNumberOfIndexes()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFINDEXES_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDADECLARATIONPARAMETERS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMembersForGivenConstructor()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMEMBERSFORGIVENCONSTRUCTOR_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfArgumentsForMembers()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFARGUMENTSFORMEMBERS_OFFSET))();
		}

		static ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LAMBDATYPEMUSTBEDERIVEDFROMSYSTEMDELEGATE_OFFSET))(paramName);
		}

		static ::System::Exception* MemberNotFieldOrProperty(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MEMBERNOTFIELDORPROPERTY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODCONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* MethodNotPropertyAccessor_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODNOTPROPERTYACCESSOR_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_OFFSET))(p0, paramName);
		}

		static ::System::Exception* PropertyDoesNotHaveGetter_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEGETTER_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYDOESNOTHAVEACCESSOR_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PARAMETEREXPRESSIONNOTVALIDASDELEGATE_OFFSET))(p0, p1);
		}

		static ::System::Exception* PropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_PROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstancePropertyNotDefinedForType(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEPROPERTYNOTDEFINEDFORTYPE_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INSTANCEANDMETHODTYPEMISMATCH_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* UnhandledBinary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDBINARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UnhandledUnary(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_UNHANDLEDUNARY_OFFSET))(p0, paramName);
		}

		static ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVECONSISTENTTYPES_OFFSET))(p0, p1);
		}

		static ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_USERDEFINEDOPMUSTHAVEVALIDRETURNTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LOGICALOPERATORMUSTHAVEBOOLEANOPERATORS_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GENERICMETHODWITHARGSDOESNOTEXISTONTYPE_OFFSET))(p0, p1);
		}

		static ::System::Exception* MethodWithMoreThanOneMatch(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_METHODWITHMORETHANONEMATCH_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentCannotBeOfTypeVoid(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTCANNOTBEOFTYPEVOID_OFFSET))(paramName);
		}

		static ::System::Exception* LabelTargetAlreadyDefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETALREADYDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* LabelTargetUndefined(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_LABELTARGETUNDEFINED_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotLeaveFinally()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFINALLY_OFFSET))();
		}

		static ::System::Exception* ControlCannotLeaveFilterTest()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTLEAVEFILTERTEST_OFFSET))();
		}

		static ::System::Exception* AmbiguousJump(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_AMBIGUOUSJUMP_OFFSET))(p0);
		}

		static ::System::Exception* ControlCannotEnterTry()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTERTRY_OFFSET))();
		}

		static ::System::Exception* ControlCannotEnterExpression()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_CONTROLCANNOTENTEREXPRESSION_OFFSET))();
		}

		static ::System::Exception* NonLocalJumpWithValue(::System::Object* p0)
		{
			return ((::System::Exception*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONLOCALJUMPWITHVALUE_OFFSET))(p0);
		}

		static ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType p0)
		{
			return ((::System::Exception*(*)(::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDLVALUE_OFFSET))(p0);
		}

		static ::System::Exception* RethrowRequiresCatch()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_RETHROWREQUIRESCATCH_OFFSET))();
		}

		static ::System::Exception* MustRewriteToSameNode(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITETOSAMENODE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteChildToSameType(::System::Object* p0, ::System::Object* p1, ::System::Object* p2)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITECHILDTOSAMETYPE_OFFSET))(p0, p1, p2);
		}

		static ::System::Exception* MustRewriteWithoutMethod(::System::Object* p0, ::System::Object* p1)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_MUSTREWRITEWITHOUTMETHOD_OFFSET))(p0, p1);
		}

		static ::System::Exception* ArgumentOutOfRange(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ARGUMENTOUTOFRANGE_OFFSET))(paramName);
		}

		static ::System::Exception* NotSupported()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NOTSUPPORTED_OFFSET))();
		}

		static ::System::Exception* NonStaticConstructorRequired(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONSTATICCONSTRUCTORREQUIRED_OFFSET))(paramName);
		}

		static ::System::Exception* NonAbstractConstructorRequired()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_NONABSTRACTCONSTRUCTORREQUIRED_OFFSET))();
		}

		static ::System::Exception* InvalidProgram()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDPROGRAM_OFFSET))();
		}

		static ::System::Exception* EnumerationIsDone()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_ENUMERATIONISDONE_OFFSET))();
		}

		static ::System::Exception* TypeContainsGenericParameters(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeContainsGenericParameters_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPECONTAINSGENERICPARAMETERS_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* TypeIsGeneric(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_OFFSET))(p0, paramName);
		}

		static ::System::Exception* TypeIsGeneric_1(::System::Object* p0, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_TYPEISGENERIC_1_OFFSET))(p0, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfConstructorArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFCONSTRUCTORARGUMENTS_OFFSET))();
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_OFFSET))(p0, p1, p2, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter_1(::System::Object* p0, ::System::Object* p1, ::System::Object* p2, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHMETHODPARAMETER_1_OFFSET))(p0, p1, p2, paramName, index);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* IncorrectNumberOfLambdaArguments()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFLAMBDAARGUMENTS_OFFSET))();
		}

		static ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object* p0, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INCORRECTNUMBEROFMETHODCALLARGUMENTS_OFFSET))(p0, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object* p0, ::System::Object* p1, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_OFFSET))(p0, p1, paramName);
		}

		static ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter_1(::System::Object* p0, ::System::Object* p1, ::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONTYPEDOESNOTMATCHCONSTRUCTORPARAMETER_1_OFFSET))(p0, p1, paramName, index);
		}

		static ::System::Exception* ExpressionMustBeReadable(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_OFFSET))(paramName);
		}

		static ::System::Exception* ExpressionMustBeReadable_1(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_EXPRESSIONMUSTBEREADABLE_1_OFFSET))(paramName, index);
		}

		static ::System::Exception* InvalidArgumentValue(::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDARGUMENTVALUE_OFFSET))(paramName);
		}

		static ::System::Exception* InvalidNullValue(::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDNULLVALUE_OFFSET))(type, paramName);
		}

		static ::System::Exception* InvalidTypeException(::System::Object* value, ::System::Type* type, ::System::String* paramName)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_INVALIDTYPEEXCEPTION_OFFSET))(value, type, paramName);
		}

		static ::System::String* GetParamName(::System::String* paramName, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_ERROR_GETPARAMNAME_OFFSET))(paramName, index);
		}
	};
}
