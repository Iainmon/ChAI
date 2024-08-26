.. default-domain:: chpl

.. module:: LocalesArray
   :noindex:

LocalesArray
============
**Usage**

.. code-block:: chapel

   use LocalesArray;


or

.. code-block:: chapel

   import LocalesArray;

.. data:: const ref Locales = (rootLocale._instance: borrowed(RootLocale?))!.getDefaultLocaleArray()

.. data:: const LocaleSpace = Locales.domain

